const int sensorPin = 34;   // Soil Moisture Sensor (Analog)
const int relayPin = 26;    // Relay Module

int moisture = 0;
const int threshold = 1800;

unsigned long previousMillis = 0;
const unsigned long interval = 1000;   // Read sensor every 1 second

void setup() {
  Serial.begin(115200);

  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {

    previousMillis = currentMillis;

    moisture = analogRead(sensorPin);

    Serial.print("Moisture Value: ");
    Serial.println(moisture);

    if (moisture < threshold) {

      digitalWrite(relayPin, HIGH);

      Serial.println("Soil is Dry");
      Serial.println("Pump ON");

    } else {

      digitalWrite(relayPin, LOW);

      Serial.println("Soil is Wet");
      Serial.println("Pump OFF");
    }

    Serial.println("----------------------");
  }

}
