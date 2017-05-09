#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int numero = 20; 
    string texto = "UTEC";
    
    int* ptrnumero = &numero;
    string* ptrtexto =&texto;
    
    cout << "El valor del numero es: " << *ptrnumero << endl;
    cout << "El valor del texto es: " << *ptrtexto << endl;
    
    return 0;

}