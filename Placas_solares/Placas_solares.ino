#include <Servo.h> //Cargamos la librería servo
int valorLDR_derecha = 0;
int valorLDR_izquierda = 0;
int valor_Servo = 0;
Servo miServo; //Creamos nuestro servo
void setup(){
Serial.begin(9600);
miServo.attach(10);
}
void loop(){
valorLDR_izquierda = analogRead(1);
Serial.print("Sensor Izquierdo: ");
Serial.print(valorLDR_izquierda);
Serial.print(" ");
valorLDR_derecha = analogRead(0);
Serial.print("Sensor Derecho: ");
Serial.print(valorLDR_derecha);
Serial.print(" ");
if (valorLDR_izquierda < valorLDR_derecha){
valor_Servo = valor_Servo -10;
if (valor_Servo < 0){ //El servo no admite valores negativos
valor_Servo = 0; //así que los pasamos como 0
}
}
else{
valor_Servo = valor_Servo +10;
if(valor_Servo > 179){
valor_Servo = 179;
}
}
miServo.write(valor_Servo);
}
