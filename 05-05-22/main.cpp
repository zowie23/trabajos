#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    string preguntas[5] = {"cual es el mejor programador de la historia?",
    "que es mas sano?",
    "que color es la bandera de Argentina?",
    "cual es el pais mas grande de America?",
    "cual es el pais con mas poblacion en el mundo"};
    string respuestas[5][3] = {
    {"Pablo Limardo","Cristian Borges", "Dennis Ritche"},
    {"coca cola", "agua", "fanta"},
    {"amarilla y roja", "verde y azul", "blanca y celeste"},
    {"Brasil", "Canada", "Bolivia"},
    {"China", "Rusia", "España"}
    };
    string respuestasCorrectas[5] = {"Dennis Ritche", "agua", "blanca y celeste", "Canada", "China"};
    int respuestaJugador [5] = {0, 0, 0, 0, 0};

    cout << "preguntas y respuestas!" << endl;
    for(int i=0;i<5;i++){
        cout << "pregunta " << i+1 << " : " << endl;
        cout << preguntas[i] << endl;
        cout << "respuestas:" << endl;
        for(int j=0;j<3;j++){
          cout << j+1 << ") " << respuestas[i][j] << endl;
        }
    cout << "-----------------" << endl;
    cout << "selecciona la respuesta correcta del 1 al 3. Presiona 0 para saltear la pregunta: ";
    cin >> respuestaJugador [i];
    }cout << "resultado!!" << endl;
    int correctas, incorrectas, salteadas;
    for(int i = 0; i<5; i++){
        if (respuestaJugador[i] !=0){
            if (respuestasCorrectas[i] == respuestas[i][respuestaJugador[i]-1]){
                correctas++;
                }else{
                    incorrectas++;
                }

                }else{
                    salteadas++;
                }

                }
                cout << "correctas: " << correctas << endl;
                cout << "incorrectas: " << incorrectas << endl;
                cout << "salteadas: " << salteadas << endl;






    return 0;
}
