#include <iostream>
using namespace std;

int main()
{ 
    int temperatura = 0;
    cout << "Ingrese la temperatura" << endl;
    cin >> temperatura;
    // Evaluar si la temperatura es menor a 15
    if (temperatura <= 15)
    {
        // Si la temperatura es menor a 15 mostrar el siguiente mensaje
        cout << "Hace frio, ponte un abrigo" << endl;
    }
    else if (temperatura >= 20)
    {
        // Si la temperatura no es menor a 15 pero mayor a 20 mostrar el siguiente mensaje
        cout << "Hace calor, no necesitas un abrigo" << endl;
    }
    else
    {
        // Si la temperatura no es menor a 15 ni mayor a 20 mostrar el siguiente mensaje
        cout << "El clima es agradable, Tenga un buen dia" << endl;
    }
    return 0;
}