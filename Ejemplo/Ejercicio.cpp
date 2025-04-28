#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variable que guardará la opción del usuario
    int opcion = 0;
    cout << "Que eres? 1 = Malo, 2 = Animal 3 = Persona" << endl; //Mensaje que da contexto
    cin >> opcion; //Se asigna a la variable la opcion del usuario

    if (opcion == 1) 
    {
        //Si el usuario digitó 1, apaecerá el siguiente mensaje
        cout << "Estas dentro de mi lista de presas";
    }
    else if (opcion == 2)
    {
        //Si el usuario digitó 2, apaecerá el siguiente mensaje
        cout << "Te voy a proteger";
    }
    else if (opcion == 3)
    {
        //Si el usuario digitó 3, apaecerá el siguiente mensaje
        cout << "Hola que tal";
    }
    else
    {
        //Si el usuario no figitó 1, 2 o 3, apaecerá el siguiente mensaje
        cout << "Nada que decirte";
    }
}