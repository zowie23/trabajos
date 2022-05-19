#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d = 2022, e = 0;
    cout << "ingresar el dia de tu nacimiento: " << endl;
    cin >> a;
    cout << "ingresar mes de tu nacimiento: " << endl;
    cin >> b;
    cout << "ingresar año de nacimiento: " << endl;
    cin >> c;
    string mesEnPalabras, edad;
    switch (b){
    case 1 :
        mesEnPalabras = " Enero ";
    break ;
    case 2 :
         mesEnPalabras = " Febrero ";
    break ;
    case 3 :
         mesEnPalabras = " Marzo ";
    break ;
    case 4 :
         mesEnPalabras = " Abril ";
    break ;
        case 5 :
         mesEnPalabras = " Mayo ";
        break ;
   case 6 :
         mesEnPalabras = " Junio ";
    break ;
    case 7 :
         mesEnPalabras = " Julio ";
   break ;
   case 8 :
         mesEnPalabras = " Agosto ";
    case 9 :
        mesEnPalabras = " Septiembre ";
    break ;
    case 10 :
        mesEnPalabras = " Octubre ";
        break ;
    case 11 :
         mesEnPalabras = " Noviembre ";
    break ;
    case 12 :
         mesEnPalabras = " Diciembre ";
    break ;
    }e = d - c;
    if (e < 18){
        edad = "menor de edad";
   }else {
   edad = "mayor de edad";
   }
    cout << "naciste el " << a << " de " << mesEnPalabras <<  " del " << c << " y sos " << edad << endl;
    return 0;
}
