#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    string puesto;
    double salario; 
    char genero;
};

int main() {
    
    Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 30;
    persona1.salario = 2500.50; 
    persona1.genero = 'M'; 

    
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << " años" << endl;
    cout << "Salario: $" << persona1.salario << endl;
    cout << "Género: " << persona1.genero << endl;

    return 0;
}