// Nomenclatura camello  Ejemplo: nombreArchivo
// Nomenclatura C        Ejemplo: nombre_archivo

#include <iostream>
using namespace std;

int main()
{
    // Variable normal
    int x = 10;
    cout << "El valor de x es: " << x << endl;
    cout << "La direccion de x: " << &x << endl;
    cout << "El tamaño de x: " << sizeof(x) << endl;
    
    //Variable puntero 
    int* ptrX;                   
    ptrX = &x;
    cout << "El valor de ptrX es: " << ptrX << endl;
    cout << "La direccion de ptrX: " << &ptrX << endl;
    cout << "El tamaño de ptrX: " << sizeof(ptrX) << endl;
    

    
    
    return 0;
}