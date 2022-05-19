#include <iostream>

using namespace std;

int main()
{
    int a, b;
    pedirDatos:
    cout << "ingresa el primer numero: ";
    cin >> a;
    cout << "ingresa el segundo numero: ";
    cin >> b;
    if (a == b){
        cout << "no se aceptan numeros iguales" << endl;
        goto pedirDatos;
    }else {
          if(a > b){
            cout << "el numero mayor es " << a << endl;
          }else {
          cout << "el numero mayor es " << b << endl;
        }
    }
    return 0;
}
