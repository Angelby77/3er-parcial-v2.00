#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Dime tú numero ";
  cin >> n;

  if (n % 2 == 0) {
    cout << "es par" << endl;
  } else if (n % 2 != 0) {
    cout << "es impar" << endl;
  }

  if (n % 3 == 0) {
    cout << "es divisible por 3" << endl;
  }

  return 0;
}