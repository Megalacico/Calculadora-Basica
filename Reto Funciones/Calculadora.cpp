#include <iostream>
#include <cmath>
using namespace std;

static double Suma(double& num1, double& num2)
{
    return num1 + num2;
}
static double Resta(double& num1, double& num2)
{
    return num1 - num2;
}
static double Producto(double& num1, double& num2)
{
    return num1 * num2;
}
static double Divicion(double& num1, double& num2)
{
    return num1 / num2;
}
static double Modulo(int& num1, int& num2)
{
    return num1 % num2;
}
static double Raiz(double& num1)
{
    return sqrt(num1);
}
static double Potencia(double& num1, double& num2)
{
    return pow(num1, num2);
}
static double Factorial(int& num1)
{
    double f = 1;
    for (int i = num1; i >= 1; i--)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int numero;
    while (true)
    {

        cout << "1 -> para Sumar" << endl;
        cout << "2 -> para Restar" << endl;
        cout << "3 -> para Multiplicar" << endl;
        cout << "4 -> para Dividir" << endl;
        cout << "5 -> para Modulo" << endl;
        cout << "6 -> para Raiz Cuadrada" << endl;
        cout << "7 -> para Potencia" << endl;
        cout << "8 -> para Factorial" << endl;
        cout << "9 -> para salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> numero;
        if (numero == 1)
        {
            double resultado;
            double num1, num2;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = Suma(num1, num2);
            cout << "El resultado de la suma es: " << resultado << endl;
        }

        if (numero == 2)
        {
            double resultado;
            double num1, num2;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = Resta(num1, num2);
            cout << "El resultado de la resta es: " << resultado << endl;
        }
        if (numero == 3)
        {
            double resultado;
            double num1, num2;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = Producto(num1, num2);
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
        }
        if (numero == 4)
        {
            double resultado;
            double num1, num2;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = Divicion(num1, num2);
            cout << "El resultado de la divicion es: " << resultado << endl;
        }
        if (numero == 5)
        {
            double resultado;
            int num1, num2;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = Modulo(num1, num2);
            cout << "El resultado del modulo es: " << resultado << endl;
        }
        if (numero == 6)
        {
            double resultado;
            double num1;
            cout << "Ingrese el numero: ";
            cin >> num1;
            resultado = Raiz(num1);
            cout << "El resultado de la raiz cuadrada es: " << resultado << endl;
        }
        if (numero == 7)
        {
            double resultado;
            double num1, num2;
            cout << "Ingrese el primer numero de base: ";
            cin >> num1;
            cout << "Ingrese el segundo numero de exponente: ";
            cin >> num2;
            resultado = Potencia(num1, num2);
            cout << "El resultado de la potencia es: " << resultado << endl;
        }
        if (numero == 8)
        {
            int resultado;
            int num1;
            cout << "Ingrese el numero: ";
            cin >> num1;
            resultado = Factorial(num1);
            cout << "El resultado de la factorial es: " << resultado << endl;
        }
        if (numero == 9)
        {
            cout << "Saliendo del programa..." << endl;
            break;
        }
    }
    return 0;
}