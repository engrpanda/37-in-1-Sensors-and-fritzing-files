/* 
KY-035 Hall analog sensor
*/
 
int sensorPin = A5;    // select the input pin
int ledPin = 13;       // select the pin for the LED
int sensorValue = 0;   // variable to store the value coming from the sensor
 
void setup () {
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
}
 
void loop () {
  sensorValue = analogRead (sensorPin);
  digitalWrite (ledPin, HIGH);
  delay (sensorValue);
  digitalWrite (ledPin, LOW);
  delay (sensorValue);
  Serial.println (sensorValue, DEC);
}
