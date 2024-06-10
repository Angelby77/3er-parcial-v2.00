// EQUIPO 4//
//EMILIANO PROGRAMA 1       
//ANGEL FUNCION 2
//SINAI FUNCION 3           
//MELINA PROGRAMA 1        
//LILIAN FUNCION 2 


#include <iostream>
using namespace std;



//funcion 1
float CalificacionFinal(float cal1, float cal2, float cal3) {
    float cal1f = cal1 * 0.20;
    float cal2f = cal2 * 0.20;
    float cal3f = cal3 * 0.60;
    return cal1f + cal2f + cal3f;
}


//funcion 2
void MayorCalificacion(float cal1f, float cal2f, float cal3f) {
    if (cal1f >= cal2f && cal1f >= cal3f) {
        cout << "El mayor es: " << cal1f << endl;
    } else if (cal2f >= cal1f && cal2f >= cal3f) {
        cout << "El mayor es: " << cal2f << endl;
    } else {
        cout << "El mayor es: " << cal3f << endl;
    }
}

int main() {
    float cal1, cal2, cal3, calfinal, cal1f, cal2f, cal3f;
    char ese;

    do {
        cout << "Ingrese la calificacion de su examen de primer parcial: ";
        cin >> cal1;

        cout << "Ingrese la calificacion de su examen de segundo parcial: ";
        cin >> cal2;

        cout << "Ingrese la calificacion de su examen de tercer parcial: ";
        cin >> cal3;

        cal1f = cal1 * 0.20;
        cal2f = cal2 * 0.20;
        cal3f = cal3 * 0.60;

        // Llamada a la función para calcular la calificación final
        calfinal = CalificacionFinal(cal1, cal2, cal3);
        cout << "La calificación final es: " << calfinal << endl;

        // Llamada a la función para encontrar la mayor calificación
        MayorCalificacion(cal1f, cal2f, cal3f);

        cout << "¿Quiere anotar otra calificacion? ";
        cin >> ese;
    } while (ese == 's' || ese == 'S');

    return 0;
}