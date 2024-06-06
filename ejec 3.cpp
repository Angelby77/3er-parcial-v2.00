#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, t;

    cout << "Ingresa 3 numeros:";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2) {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    if (n1 > n3) {
        t = n1;
        n1 = n3;
        n3 = t;
    }
    if (n2 > n3) {
        t = n2;
        n2 = n3;
        n3 = t;
    }

    cout << "Los numeros ordenados de menor a mayor son: " << n1 << ", " << n2 << ", " << n3 << endl;

    return 0;
}
