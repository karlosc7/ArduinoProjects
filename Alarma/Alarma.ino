const int analogInPin = A1;
const int OutPin = 13;
int sensorValue = 0;
void setup() {
// Inicializamos la comunicacion serial a 9600 bps:
Serial.begin(9600);
pinMode(OutPin, OUTPUT);
}
void loop() {
sensorValue = analogRead(analogInPin);
if(sensorValue > 900)
{
digitalWrite(OutPin, HIGH);
}
else
{
digitalWrite(OutPin, LOW);
}
Serial.print("sensor = " );
Serial.println(sensorValue);
delay(100);
}
