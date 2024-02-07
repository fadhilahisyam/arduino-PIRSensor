// C++ code
//
const int pirPin = 2;
const int relayPin = 4;
void setup()
{
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop()
{
  int sensor = digitalRead(pirPin);
  Serial.println(sensor);
  
  if (sensor == LOW){
    digitalWrite(relayPin, LOW);
  }
  else if (sensor == HIGH){
    digitalWrite(relayPin, HIGH);
    delay(5000);
  }
  delay(100);
}