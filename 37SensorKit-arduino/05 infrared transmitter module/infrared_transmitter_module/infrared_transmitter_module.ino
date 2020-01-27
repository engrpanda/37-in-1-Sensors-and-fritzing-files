#include <IRremote.h>
IRsend irsend;
void setup()
{
  Serial.begin(9600);
}
void loop() {
  for (int i = 0; i < 50; i++) {
    irsend.sendSony(0xa90, 12); // Sony TV power code
    delay(40);
  }
}
