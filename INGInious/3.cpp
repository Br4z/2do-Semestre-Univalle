// Programa para practicar el uso de ifs.

#include <iostream>
using namespace std;

int main() {
    float a, b, operacion;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    if( c == 1)
    {
        operacion = a + b;
        cout << operacion << "\n";
    }   
    else if (c == 2) 
    {
        operacion = a - b;
        cout << operacion << "\n";
    }   
    else if (c == 3)
    {
        operacion = a * b;
        cout << operacion << "\n";
    }   
    else 
    {
        operacion = a / b;
        cout << operacion << "\n";
    }
    return 0;
}
