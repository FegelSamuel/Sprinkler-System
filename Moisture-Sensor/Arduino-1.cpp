// C++ code
//
int moisture = 0;

void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Apply power to the soil moisture sensor
  digitalWrite(A0, HIGH);
  moisture = analogRead(A1);
  // Turn off the sensor to reduce metal corrosion
  // over time
  digitalWrite(A0, LOW);
  	if (moisture < 600) {
          Serial.println(moisture);
        } 
  	else {
  	Serial.println(0);
  	}
    delay(7200000); // Wait for 2 hours, then check
}
