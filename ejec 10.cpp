#include<iostream>
using namespace std;

int main()
{
    int a;
    int acum=0;
    int s=0;
    std::cout << "introduce un numero: ";
    std::cin >> a;
    while(a>0)
    {
    s+=a;
    acum++;
    std::cout << ("anota un numero: ");
    std::cin >> a;

    }
    std::cout << "tu cantidad de num ingresados es:" << acum << std::endl;
    std::cout << "se ingresaron un total de " << s << " numeros" << std::endl;

    return 0;
}