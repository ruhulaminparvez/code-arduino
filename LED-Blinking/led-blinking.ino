int p = 12;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(p, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(p, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(p, LOW);
  delay(1000);
}