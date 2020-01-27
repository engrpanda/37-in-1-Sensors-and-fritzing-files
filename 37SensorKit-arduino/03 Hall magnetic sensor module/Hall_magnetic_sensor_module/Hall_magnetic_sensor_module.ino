int Led = 13 ;// define LED Interface
int SENSOR = 3 ;// define the Hall magnetic sensor interface
int val ;// define numeric variables val
void setup ()
{
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (SENSOR, INPUT) ;// define the Hall magnetic sensor output interface
}
void loop ()
{
  val = digitalRead (SENSOR) ;// read digital interface is assigned a value of 3 val
  if (val == HIGH) // When the shock sensor detects a signal, LED lights
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
