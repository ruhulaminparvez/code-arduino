int enable = 11; // Assign Pin for Enable Pin of L293D
int in1 = 10; // Assign Pin for Input-1
int in2 = 9; // Assign Pin for Input-2
int high=49;
int low=969;
void setup()
{
pinMode(enable, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
  pinMode(A0,INPUT);
  
  Serial.begin(9600);
   pinMode(A1,INPUT);
  Serial.begin(9600);
   
  pinMode(A2, INPUT);
  Serial.begin(9600);
   pinMode(8, OUTPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
   pinMode(7, OUTPUT);

}
void loop()
{
   int value3 = analogRead(A2);
  int value4 = analogRead(A3);
  
  if(value3==high && value4==high)
  {
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
  }
    
  else if(value3==high|| value4==high)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    
    
  }
  else if(value3==low&&value4==low)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    
   }

 
  
  
    Serial.println(value3);
   
    Serial.println(value4);
   
 
  
  
 
  delay(1000);
  

 int reading = analogRead(A0);
   int reading2 = analogRead(A1);
 
 float voltage = reading * 4.68;
 voltage /= 1024.0;
  float voltage2 = reading2 * 4.68;
 voltage2 /= 1024.0;
 
 // now print out the temperature
 float value = (voltage - 0.5) * 100;
  float value2 = (voltage2 - 0.5) * 100;
  
 if(value>30&&value2>30)
 {
   digitalWrite(enable, HIGH); // Must be High to run the motor

  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}
 
  else
 {
   digitalWrite(enable, LOW); // Must be High to run the motor

 
 
}
 
  
 Serial.print(value);
 Serial.println(" degrees C\n");
  Serial.print(value2);
 Serial.println(" degrees2 C\n");
 
}

