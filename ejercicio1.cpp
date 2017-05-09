#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string narchivo;
    cout << "Ingrese el nombre del archivo: ";
    cin >> narchivo;
    ofstream archivo (narchivo);
    
    int n; cin >> n;
    int rango; cin >> rango;
    
    for (int i = 0; i < n; i++)
    {
        archivo << rand () % rango << endl;
    }
      
    archivo.close();
    
    return 0;
}