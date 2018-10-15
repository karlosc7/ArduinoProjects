/*
  Blink
  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Blink
*/

/*
 * Carlos del Cerro Tenorio
 */

// reset board
void setup() {
  // inicializar LED_BUILTIN
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // voltaje
  delay(500);                       // esperar medio segundo
  digitalWrite(LED_BUILTIN, LOW);    // no voltaje
  delay(500);                       // esperar medio segundo
}
