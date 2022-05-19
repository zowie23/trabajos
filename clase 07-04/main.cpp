#include <iostream>

using namespace std;
int main()
{


    string pregunta = "de que color es el caballo de San Martin?", res1 = "blanco", res2 = "verde", res3 = "azul";
    int i = 2;
    char opcion;
    volverAPreguntar:
    if (i != 0){
    cout << pregunta << endl;
    cout << "elegi la respuesta correcta: " << endl;
    cout << "a) blanco" << endl;
    cout << "b) verde" << endl;
    cout << "c) azul" << endl;
    cin >> opcion;


        switch(opcion){
    case 'a':
        cout << "acertaste!" << endl;
        break;
    case 'b':
        i = i - 1;
        cout << "incorrecto" << endl;
        cout << "oportunidades restantes: " << i << endl;
        goto volverAPreguntar;
        break;
    case 'c':
        i = i - 1;
        cout << "incorrecto" << endl;
        cout << "oportunidades restantes: " << i << endl;
        goto volverAPreguntar;
        break;
    }
    }}
    /*
int i = 10;
int mayor = 0;
pedirDatos:
if (i != 0){
        cout << "ingresa numero: ";
        if (numeroIngresado > mayor){
            mayor = "ingresa numero: ";
            i = i - 1;
            goto pedirDatos;
            else{
                i = i - 1;
                goto pedirDatos;
            }
        }

}



return 0;
}*/
