#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    char respuesta;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Trabajas?(s/n) ";
    cin >> respuesta;
    if(edad >= 18 && respuesta == 's')
    {
        cout << "Felicidades, eres mayor de edad y responsable" << endl;
    }
    else if(edad >= 18 && respuesta == 'n')
    {
        cout << "Ponte a trabajar o a estudiar" << endl;
    }
    else
    {
        cout << "Lo siento, regresa en un mes" <<endl;
    }
    return 0;
}