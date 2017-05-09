#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void completaArreglo(int* arreglo, int cantidad)
{
    for (int i = 0; i < cantidad; i++) 
    {
        arreglo[i] = rand() % 51;
    }
}

int main()
{
    int arreglo1[10];
    int arreglo2[20];

    completaArreglo(arreglo1, 10);
    
    completaArreglo(arreglo2, 20);
    
    for (auto i: arreglo1)
        cout << i << endl;

    for (auto i: arreglo2)
        cout << i << endl;


    return 0;
}