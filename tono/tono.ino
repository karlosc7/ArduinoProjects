void setup()
{
pinMode(12, OUTPUT);      // Fija el pin 3 como salida.
}

void loop()
{
tone(3, 261.63, 250);      // Lanza señal a 261,63Hz por el pin 3 durante 250ms.
}
