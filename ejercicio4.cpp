#include <iostream>

using namespace std;

// Escribe un programa que simule un cajero: debe mostrar un menu de opciones (1. Depositar, 2. Retirar, 3. Salir)
// Y repetir el menu hasta que el usuario elija la opcion 3.

int main()
{

    int opcion = 0;

    do
    {

        cout << "-------- 1.Depositar --------" << endl;
        cout << "-------- 2. Retirar ---------" << endl;
        cout << "--------- 3. Salir ----------" << endl;
        cout << "-----------------------------" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Escogio la opcion de depositar" << endl;
            break;
        case 2:
            cout << "Escogio la opcion de retirar" << endl;
            break;
        case 3:
            cout << "Saliendo del menu..." << endl;
            break;
        }
    } while (opcion != 3);

    return 0;
}