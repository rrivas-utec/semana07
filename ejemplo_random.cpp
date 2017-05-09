#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Limite Maximo
    cout << "Limite Maximo de Random :" << RAND_MAX << endl << endl;
    
    // Generar 10 numeros randoms
    for (int i=0; i < 10; i++)
    {
        cout << "numero " << i + 1 << " : " << rand() << endl;
    }
    
    // Generar 10 numeros randoms entre el rango de 0 a 99
    int limite = 100;
    for (int i=0; i < 10; i++)
    {
        cout << "numero " << i + 1 << " : " << rand() % limite << endl;
    }
    
    // Generar 10 numeros randoms entre el rango de 0 al 1
    for (int i=0; i < 10; i++)
    {
        cout << "numero " << i + 1 << " : " << rand() / float(RAND_MAX) << endl;
    }
    
    return 0;
}
