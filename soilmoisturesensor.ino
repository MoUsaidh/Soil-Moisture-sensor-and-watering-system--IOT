
int moistureValue;
float moisture_percentage;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  moistureValue=analogRead(A3);
  moisture_percentage=((moistureValue/876.00)*100);
  Serial.print("\nMoisture Value :");
  Serial.print(moisture_percentage);
  Serial.print("%");
  delay(1000);
}