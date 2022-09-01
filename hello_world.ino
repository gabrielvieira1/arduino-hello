void setup() {
 pinMode(2, OUTPUT); //LED
}

void loop() {
 digitalWrite(2, HIGH); //LED ON
 delay(500); //1 second
 digitalWrite(2, LOW); //LED OFF
 delay(500); //1 second
}