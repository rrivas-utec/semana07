#include <iostream>
#include <string>
using namespace std;

void suma (int a, int b, int& resultado)
{
    resultado = a + b;
}

void suma (int a, int b, int* ptrResultado)
{
    *ptrResultado = a + b;
}

int main()
{
    int x = 10;
    int y = 20;
    int sumaXY = 0;
    
    suma (x, y, sumaXY);
    cout << "El resultado sumaXY es: " << sumaXY << endl;
    
    int x1 = 100;
    int x2 = 200;
    int sumaXY1 = 0;
    
    suma(x1, x2, &sumaXY1);
    cout << "El resultado sumaXY1 es: " << sumaXY1 << endl;
    
    return 0;
}