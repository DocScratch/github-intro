//Did it work?
int led = 13; // Chooses the LED pin

void setup() {                

  pinMode(led, OUTPUT);   // sets LED as output  
}


void loop() { // starts the loop
  digitalWrite(led, HIGH); // LED 'on'   
  delay(1000);   // sets delay           
  digitalWrite(led, LOW);    // LED 'off'
  delay(1000); // sets delay             
}
