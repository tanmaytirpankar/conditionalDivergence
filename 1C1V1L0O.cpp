/*
 * Testing control flow change
 * Program characteristics:
 *    1 floating-point conditional
 *    Conditional has 1 variable
 *    Conditional has 1 literal
 *    Conditional has 0 operations
 *
 * Expectation of someone unaware of floating-point semantics:
 *    Control flow enters the then block
 *    If you change the input to 0.3, the input is definitely less than 0.300000000000000044 and so the control flow
 *    should definitely enter the then block
 *
 * Problem:
 * We have a literal 0.300000000000000044 in the conditional here which is implicitly casted to a double due to
 * C/C++ semantics.
 *
 * Solution:
 * To fix the control flow, either change the variable to a double precision type (so use d which is of double precision
 * type). Or change the literal to float explicitly by using the f suffix like 0.3f.
 *
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

void myFunc(float f, double d) {
//  cout << setprecision(8) << "f: " << f << endl;
//  cout << setprecision(17) << "d: " << d << endl;

  // Change the f to d to see the control flow change
  if (f <= 0.300000000000000044) {
    cout << "Path then" << endl;
  } else {
    cout << "Path else" << endl;
  }
}


int main() {
  // 0.300000000000000044 as input
  myFunc(0.300000000000000044, 0.300000000000000044);


  // 0.3 as input
//  myFunc(0.3, 0.3);

  return 0;
}
