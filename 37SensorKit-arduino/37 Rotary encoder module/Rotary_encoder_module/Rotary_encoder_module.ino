#define SERIAL_BAUDRATE 115200
#define CLK_PIN 2 // define connection pin
#define DT_PIN 3
#define SW_PIN 4

#define interruptA 0 // UNO pin2 is interrupt 0，refer to the official website of other board

volatile long count = 0;
unsigned long t = 0;

void setup() {
  Serial.begin(SERIAL_BAUDRATE);
  // when the state is down, the rotary encoder is rotated.
  attachInterrupt(interruptA, rotaryEncoderChanged, FALLING);
  pinMode(CLK_PIN, INPUT_PULLUP); // Input mode and enable internal pull up resistor
  pinMode(DT_PIN, INPUT_PULLUP); 
  pinMode(SW_PIN, INPUT_PULLUP); 
}
void loop() {
  if(digitalRead(SW_PIN) == LOW){ // Press the switch, return to zero
     count = 0;  
     Serial.println("count reset to 0");
     delay(300);
  }
}
void rotaryEncoderChanged(){ // when CLK_PIN is FALLING
  unsigned long temp = millis();
  if(temp - t < 200) // remove bounce
    return;
  t = temp;
  
  // DT_PIN state represents a forward or reverse.
  count += digitalRead(DT_PIN) == HIGH ? 1 : -1;
  Serial.println(count);
}
