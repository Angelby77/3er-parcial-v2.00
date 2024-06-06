#include <iostream>
using namespace std;

int main() {
    int opcion;
    float base, altura, lado1, lado2, baseMenor;

    cout << "CALCULO DE AREAS\n";
    cout << "1- Calcular el area de un triangulo\n";
    cout << "2- Calcular el area de un trapecio\n";
    cout << "3- Calcular el area de un rectangulo\n";
    cout << "QUE AREA DESEA CALCULAR?: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Introduce la base del triangulo: ";
            cin >> base;
            cout << "Introduce la altura del triangulo: ";
            cin >> altura;
            cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
            break;
        case 2:
            cout << "Introduce la base mayor del trapecio: ";
            cin >> base;
            cout << "Introduce la base menor del trapecio: ";
            cin >> baseMenor;
            cout << "Introduce la altura del trapecio: ";
            cin >> altura;
            cout << "El area del trapecio es: " << ((base + baseMenor) * altura) / 2 << endl;
            break;
        case 3:
            cout << "Introduce la base del rectangulo: ";
            cin >> base;
            cout << "Introduce la altura del rectangulo: ";
            cin >> altura;
            cout << "El area del rectangulo es: " << base * altura << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}
