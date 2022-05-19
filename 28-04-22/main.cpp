#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "ingresar el valor de a: " << endl;
    cin >> a;
    cout << "ingresar el valor de b: " << endl;
    cin >> b;
    c = a;
    a= b;
    b = c;
    cout << "el nuevo valor de a es: " << a << endl;
    cout << "el nuevo valor de b es: " << b << endl;
    return 0;
}



