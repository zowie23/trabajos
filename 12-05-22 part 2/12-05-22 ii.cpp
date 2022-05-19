#include <iostream>

using namespace std;

int main(){
    float pago, totalAPagar=0;
    cout << "ingresa el monto a pagar: ";
    cin >> pago;
    if (pago>= 1000){
        totalAPagar = pago * 0.80;
        cout << "el total a pagar es : " << totalAPagar;
    }else {
        cout << "el total a pagar es: " << pago;

    }
return 0;
}
/*#include <iostream>

using namespace std;

int main() {
    float total, cuantas, cantidad, manzanas = 50;
    cout << "cuantas manzanas queres comprar? ";
    cin >> cuantas;
    cantidad = cuantas * manzanas;
    if (cantidad <= 2){
        total = cantidad;
        cout << "tu total a pagar es: " << total;
}if (cantidad >=3&& cantidad <=5){
    total = cantidad * 0.90;
    cout << "tu total a pagar es: " << total;
}if (cantidad >=6&& cantidad <=10){
    total = cantidad * 0.85;
    cout << "tu total a pagar es: " << total;
}if (cantidad >=11){
    total = cantidad * 0.80;
    cout << "tu total a pagar es: " << total;
}
return 0;
}*/




