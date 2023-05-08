#include <iostream>
#include <cstdlib>

using namespace std;

int suma(int x, int y)
{
    return x + y;
}
int resta(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
int division(int x, int y)
{
    return x / y;
}

void calculadora(void)
{
    system("clear");
    int op, x, y;
    cout << "MENU DE LA CALCULADORA" << endl;
    cout << "1) Suma" << endl;
    cout << "2) Resta" << endl;
    cout << "3) Multiplicacion" << endl;
    cout << "4) Division" << endl;
    cout << "Seleccione una opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Ingrese el valor de x: ";
        cin >> x;
        cout << "Ingrese el valor de y: ";
        cin >> y;
        cout << "El resultado es: " << suma(x, y);
        break;
    case 2:
        cout << "Ingrese el valor de x: ";
        cin >> x;
        cout << "Ingrese el valor de y: ";
        cin >> y;
        cout << "El resultado es: " << resta(x, y);
        break;
    case 3:
        cout << "Ingrese el valor de x: ";
        cin >> x;
        cout << "Ingrese el valor de y: ";
        cin >> y;
        cout << "El resultado es: " << mult(x, y);
        break;
    case 4:
        cout << "Ingrese el valor de x: ";
        cin >> x;
        cout << "Ingrese el valor de y: ";
        cin >> y;
        cout << "El resultado es: " << division(x, y);
        break;

    default:
        cout << "Opcion invalida";
        break;
    }
}

int main(void)
{
    while (true)
    {
        calculadora();
    }
    return 0;
}