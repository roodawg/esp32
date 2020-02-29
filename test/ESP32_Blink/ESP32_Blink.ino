const int ledPin = 2;

void setup() {
 pinMode (ledPin, OUTPUT);
 Serial.begin(115200);
}

void loop() {
  digitalWrite (ledPin, HIGH);
  Serial.println("On");
  delay (5000);
  digitalWrite (ledPin, LOW);
  Serial.println("Off");
  delay (5000);
}
