int Led = 13 ; // define LED Interface
int buttonpin = 3; // define the linear Hall magnetic sensor interface
int val ; // define numeric variables val
void setup ()
{
  pinMode (Led, OUTPUT) ; // define LED as output interface
  pinMode (buttonpin, INPUT) ; // define linear Hall magnetic sensor output interface
}
void loop ()
{
  val = digitalRead (buttonpin) ; // digital interface will be assigned a value of 3 to read val
  if (val == HIGH) // When the linear Hall sensor detects a magnetic signal, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
