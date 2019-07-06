#define led1 13
#define analogInPin  A0

void setup() {
  // initialize digital pin led1 as an output.
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  int sensorValue = analogRead(analogInPin);
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  delay(1);
}
