#include <iostream>
using namespace std;

int main()
{
    // Variable normal
    int x = 10;
    cout << "El valor de x es: " << x << endl;      // Imprimir el valor
    cout << "La direccion de x es: " << &x << endl; // Direccion de una variable
    cout << "El tamaño de x es: " << sizeof(x) << endl; // Tamaño
    
    // Variable puntero
    int* ptrX;          // Nomenclatura camello   Ejemplo: nombreArchivo
                        // Nomenclaruta C         Ejemplo: nombre_archivo
    
    // Asignando la direccion de X al puntero prtX                    
    ptrX = &x;
    cout << "El valor de ptrX es: " << ptrX << endl;      // Imprimir el valor
    cout << "La direccion de ptrX es: " << &ptrX << endl; // Direccion del puntero
    cout << "El tamaño de ptrX es: " << sizeof(ptrX) << endl; // Tamaño
    
    
    return 0;
}