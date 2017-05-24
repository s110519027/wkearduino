const int analogInPin=A0;
const int analogOutPin=9;

int sensorValue = 0;
int outputValue = 0;

void setup() {
  // put your setup code here, to run once:
  // 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue,960,600,255,0);

  analogWrite(analogOutPin,outputValue);

  Serial.print("sensor=");
  Serial.print(sensorValue);
  Serial.print("output=");
  Serial.print(outputValue);
    Serial.print("\n");

  delay(2);
}
