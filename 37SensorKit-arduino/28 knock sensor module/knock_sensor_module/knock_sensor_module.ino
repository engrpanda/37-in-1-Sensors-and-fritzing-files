int Led = 13 ;// define LED Interface
int Shock = 3; // define the percussion Sensor Interface
int val ;// define numeric variables val
void setup ()
{
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (Shock, INPUT) ;// define knock sensor output interface
}
void loop ()
{
  val = digitalRead (Shock) ;// read digital interface is assigned a value of 3 val
  if (val == HIGH) // When the percussion when the sensor detects a signal, LED flashes
  {
    digitalWrite (Led, LOW);
  }
  else
  {
    digitalWrite (Led, HIGH);
  }
}
