/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    for(int i=0;i<=30000;i++){



    cout << 1+(rand()%6) << endl;


}
    return 0;
}*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int numeroOculto, respuesta;

    srand(time(0));

    numeroOculto = rand()%10;
    cout << "****adivina el numero oculto entre 1 y 10****" << endl;
    int i = 3;
    pedirPregunta:
    cout << "ingresa tu respuesta: ";
    cin >> respuesta;
    if(numeroOculto == respuesta){

        cout << "ganaste!";

    }
    if(numeroOculto < respuesta){

        i = i - 1;
        cout << "el numero oculto es menor";
        cout << " oportunidades restantes: " << i << endl;
        if (i != 0){
        goto pedirPregunta;
        }
        cout << "fin del juego!";
    }else if(numeroOculto > respuesta){

        i = i - 1;
        cout << "el numero oculto es mayor";
        cout << " oportunidades restantes: " << i << endl;
        if (i != 0){
        goto pedirPregunta;
        }cout << "fin del juego";
}
return 0;
}
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string frutas[5] = {"Manzana", "Banana", "Pera", "Mandarina", "Frutilla"};
    float compra, kilo, precios [5] = {15, 53.99, 10, 500, 1000};
    for(int i=0;i<5;i++){
        cout << " la fruta " <<frutas[i] << " sale " << precios [i] << " el kilo " << endl;
    }
    compra = frutas;
    kilo = precios;
    cout << "que fruta queres comprar? ";
    cin >> compra;
    cout << "cuantos kilos?";
    cin >> kilo;
    total = kilo * precios[compra];
    cout << "el precio total es: " << total;








return 0;
}*/







