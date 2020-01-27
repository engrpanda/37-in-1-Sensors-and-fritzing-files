//Arduino test code:
int redpin = 11; // select the pin for the red LED
int yellowpin =10; // select the pin for the yellow LED
int val;
void setup() {
pinMode(redpin, OUTPUT);
pinMode(yellowpin, OUTPUT);
Serial.begin(9600);
}
void loop()
{
for(val=255; val>0; val--)
{
analogWrite(11, val);
analogWrite(10, 255-val);
delay(15);
}
for(val=0; val<255; val++)
{
analogWrite(11, val);
analogWrite(10, 255-val);
delay(15);
}
Serial.println(val, DEC);
}
