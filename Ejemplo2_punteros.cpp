#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numero = 20;
    string texto = "UTEC";
    
    // Creando punteros
    int* ptrNumero = &numero;
    string* ptrTexto = &texto;
    
    // Imprimiendo los valores de la variable usando operador *
    cout << "Valor de numero :" << *ptrNumero << endl;
    cout << "Valor de texto :" << *ptrTexto << endl;
    
    return 0;
}