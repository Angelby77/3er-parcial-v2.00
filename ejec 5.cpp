#include <iostream>
using namespace std;

int main() {
    float h, p, s;

    cout << "Ingrese las horas trabajadas: ";
    cin >> h;
    cout << "Ingrese el precio por hora: ";
    cin >> p;

    s = h * p;

    if (h > 40) {
        if (h <= 50) {
            s += (h - 40) * p * 0.5;
        } else {
            s += 10 * p * 0.5 + (h - 50) * p;
        }
    }

    cout << "El salario semanal es: " << s << endl;

    return 0;
}
