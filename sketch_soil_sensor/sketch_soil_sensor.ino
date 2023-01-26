
#define sensorPin A0

void setup() {
	Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
	Serial.print("Analog output: ");
	Serial.println(readSensor());
	delay(1000);
}


int readSensor() {
	delay(10);							// Allow power to settle
	int val = analogRead(sensorPin);	// Read the analog value form sensor
	return val;							// Return analog moisture value
}