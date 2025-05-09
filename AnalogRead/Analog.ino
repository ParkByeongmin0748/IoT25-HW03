const int potPin = 34;  // Potentiometer signal connected to GPIO34
int potValue = 0;

void setup() {
  Serial.begin(115200);  // Ensure Serial Monitor also uses 115200 baud
  delay(1000);
}

void loop() {
  potValue = analogRead(potPin);  // Read analog value (0~4095)
  Serial.println(potValue);
  delay(500);
}
