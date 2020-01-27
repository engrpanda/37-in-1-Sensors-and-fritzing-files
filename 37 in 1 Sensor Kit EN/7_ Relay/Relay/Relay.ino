//KY019 5V relay module
int relay = 10; // relay turns trigger signal - active high;
void setup ()
{
  pinMode (relay, OUTPUT); // Define port attribute is output;
}
void loop ()
{
  digitalWrite (relay, HIGH); // relay conduction;
  delay (1000);
  digitalWrite (relay, LOW); // relay switch is turned off;
  delay (1000);
}
