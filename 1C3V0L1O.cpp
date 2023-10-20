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

void myFunc(double f, float a, float b) {
  cout << setprecision(17) << "f: " << f << endl;
  cout << setprecision(8) << "a: " << a << endl;
  cout << setprecision(8) << "b: " << b << endl;
  cout << setprecision(8) << "a+b: " << a+b << endl;

  // Change the f to d to see the control flow change
  if (f <= a + b) {
    cout << "Path then" << endl;
  } else {
    cout << "Path else" << endl;
  }
}


int main() {
  // 0.3 as input
  myFunc(0.3, 0.15, 0.15);

  return 0;
}
