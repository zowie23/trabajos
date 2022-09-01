/*Blink con tiempo controlado
Se requiere hacer un programa en el que mientras se mantenga pulsado el botón 1, la luz
titile. Si se pulsa el botón 2, la velocidad debe aumentar y si se pulsa el botón 3, 
debe disminuir.*/
int pulsador1 = 2;
int pulsador2 = 3;
int pulsador3 = 4;
  int led = 13;
  bool estado = true;

void setup() {
 pinMode (pulsador1, INPUT);
 pinMode (pulsador2, INPUT);
 pinMode (pulsador3, INPUT);
 pinMode (led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  estado = digitalRead(pulsador1);
  if (estado == HIGH) {
    digitalWrite(led, HIGH);

   delay (1000);
   digitalWrite(led, LOW);
   delay (1000);

  
}
estado = digitalRead(pulsador2);
if (estado == HIGH) {
  digitalWrite(led, HIGH);

delay (300);
digitalWrite(led, LOW);
delay (300);

}
estado = digitalRead(pulsador3);
if (estado == HIGH) {
  digitalWrite(led, HIGH);

delay (1500);
digitalWrite(led, LOW);
delay (1500);

} 
}
