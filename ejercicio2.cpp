#include <iostream>

using namespace std;

// Escribe un programa que muestre la tabla de multiplicar de un numero ingresado por el usuario (del 1 al 10)
int main()
{

    int i = 0;
    int n = 0;
    int m = 0;

    cout << "Ingrese un numero del 1 al 10" << endl;
    cin >> n;

    while (i <= 9)
    {

        i += 1;
        m = n * i;

        cout << "La tabla " << i << " es: " << m << endl;
    }

    return 0;
}