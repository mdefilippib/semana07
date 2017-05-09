#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //Limite Maximo
    cout << "Limite Maximo de Random : " << RAND_MAX << endl << endl;
    
    // Generar 10 numeros random
    for (int i = 0; i < 10; i++)
    {
        cout << "numero" << i + 1 << " : " << rand() << endl;
    }
    
    // Generar numeros random entre 0 y 99
      for (int i = 0; i < 10; i++)
    {
        cout << "numero" << i + 1 << " : " << rand() % 100 << endl;
    }
    
    // Generar numeros random entre 0 y 1
      for (int i = 0; i < 10; i++)
    {
        cout << "numero" << i + 1 << " : " << rand()/ float(RAND_MAX) << endl;
    }
    
    // Generar numeros random entre 9 y 25
    
    return 0;
}