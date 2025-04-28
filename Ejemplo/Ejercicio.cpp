#include <iostream>
using namespace std;

int main()
{
    int opcion = 0;
    cout << "Que eres? 1 = Malo, 2 = Animal 3 = Persona" << endl;
    cin >> opcion;

    if (opcion == 1)
    {
        cout << "Estas dentro de mi lista de presas";
    }
    else if (opcion == 2)
    {
        cout << "Te voy a proteger";
    }
    else if (opcion == 3)
    {
        cout << "Hola que tal";
    }
    else
    {
        cout << "Nada que decirte";
    }
}