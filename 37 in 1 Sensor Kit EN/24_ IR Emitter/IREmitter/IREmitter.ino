# Include <IRremote.h>
int RECV_PIN = 11; // define input pin on Arduino
IRrecv irrecv (RECV_PIN);
decode_results results;
void setup ()
{
Serial.begin (9600);
irrecv.enableIRIn (); // Start the receiver
}
void loop () {
if (irrecv.decode (& results)) {
Serial.println (results.value, HEX);
irrecv.resume (); // Receive the next value
}
}
Main emission part of the code:
# Include <IRremote.h>
IRsend irsend;
void setup ()
{
Serial.begin (9600);
}
void loop () {
for (int i = 0; i <50; i + +) {
irsend.sendSony (0xa90, 12); // Sony TV power code
delay (40);
}
}
