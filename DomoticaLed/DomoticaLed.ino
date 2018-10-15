/*
RGB tonalidades para crear un ámbiente cálido para una sala
de estar o un comedor. Aproximación a la domótica con tecnología
led.
*/

/*
 * Carlos del Cerro Tenorio
 */

//RGB definition 
int redPin = 3;
int greenPin = 5;
int bluePin = 6;
 
//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  setColor(205, 92, 92);  // indianred
  delay(1500);
  setColor(240, 128, 128);  // lightcoral
  delay(1500);
  setColor(250, 128, 114);  // salmon
  delay(1500);
  setColor(233, 150, 122);  // darksalmon
  delay(1500);  
  setColor(255, 160, 122);  // lightsalmon
  delay(1500);
  setColor(255, 51, 51);  // red
  delay(1500);
}
 
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
