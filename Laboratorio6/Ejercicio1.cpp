#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char texto[200], subtexto[200];
    char *busqueda;
    cout << "Ingrese un texto: ";
    cin >> texto;
    cout << "ingrese la palabra a buscar: ";
    cin >> subtexto;
    busqueda = strstr(texto, subtexto);
    if (busqueda == NULL)
    {
        cout << "La palabra no existe dentro del texto.";
    }
    else
    {
        cout << "La palabra se encuentra dentro del texto.";
    }

    return 0;
}