float temperatura = 0;
int fan = 8;
void setup(){
Serial.begin (9600);
pinMode(8,OUTPUT)
}
void loop(){
//Calcula la temperatura usando como referencia 5v
temperatura = (5.0 * analogRead(0)*100.0)/1023.0;
Serial.println (temperatura);
delay (500);
if (temperatura < 20)
{
digitalWrite(8, LOW);
} else
digitalWrite(8,HIGH);
}
