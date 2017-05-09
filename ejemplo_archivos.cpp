#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    // Pedir el nombre del archivo
    string nArchivo;
    cout << "Ingrese el nombre del archivo :";
    cin >> nArchivo;

    // Generar el archivo
    ofstream archivo (nArchivo);

    // Pedir la cantidad de numeros a generar
    int n;
    cout << "Ingrese cantidad de numeros :";
    cin >> n;
    
    // Pedir Limite del Rango y validar que no sea mayor a RAND_MAX
    int limite = 0;
    do
    {
        cout << "Ingrese el limite :";
        cin >> limite;
    } while (limite >= RAND_MAX);
    
    // Generar numeros aleatorios que deberan ser grabados en el archivo (FUNCION)
    for (int i = 0; i < n; i++)
    {
        archivo << rand() % limite << endl;
    }
    
    // Cerrar el archivo
    archivo.close();

    return 0;
}