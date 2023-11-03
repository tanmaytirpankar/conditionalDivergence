/*
 * Testing control flow change
 * Program characteristics:
 *    1 floating-point conditional
 *    Conditional has 3 variables
 *    Conditional has 0 literals
 *    Conditional has 1 operation
 *
 * Expectation of someone unaware of floating-point semantics:
 *    Control flow enters the then block
 *
 * Problem:
 *
 *
 * Solution:
 *
 *
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

void myFunc(float f, float a, double b) {
  cout << setprecision(8) << "f: " << f << endl;
  cout << setprecision(17) << "a: " << a << endl;
  cout << setprecision(17) << "b: " << b << endl;
  cout << setprecision(18) << "a+b: " << a+b << endl;

  if (f <= a + b) {
    cout << "Path then" << endl;
  } else {
    cout << "Path else" << endl;
  }
}


int main() {
  // 0.3 as input
  myFunc(0.3, 0.15, 0.15);

  // 0.3 as input
//  myFunc(0.3, 0.150000000000000022, 0.150000000000000022);

  return 0;
}
