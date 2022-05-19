#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g;
    cout << "ingresa la cantidad de hombres en la division: " << endl;
    cin >> a;
    cout << "ingresa la cantidad de mujeres en la division: " << endl;
    cin >> b;
    c = a + b;
    d = (a * 100) /c;
    e = (b * 100) /c;
    cout << "el porcentaje de hombres en la division es: " << d << endl;
    cout << "el porcentaje de mujeres en la division es: " << e << endl;
    return 0;
}
