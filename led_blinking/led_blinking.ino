#define LED 13

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  digitalWrite(LED, HIGH);
  delay(10000);
  digitalWrite(LED, LOW);
  delay(5000);
  
}
