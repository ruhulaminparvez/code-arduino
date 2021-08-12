int brintness=0;
int inPin1=2;
int inPin2=4;
int val1=0;
int val2=0;
int i=0;
int count=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(inPin1,INPUT);
  pinMode(inPin2,INPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(6, HIGH);
  delay(300);
  digitalWrite(5, HIGH);
  delay(300);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1500);
  for(brintness=0;brintness<=255;brintness+=5){
    analogWrite(11,brintness);
    analogWrite(10,brintness);
    analogWrite(9,brintness);
    analogWrite(6,brintness);
    analogWrite(5,brintness);
    analogWrite(3,brintness);
    delay(100);
  }
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1500);
  
  val1=digitalRead(inPin1);
  if(val1==HIGH){
    for(i=0;i<10;i++){
      digitalWrite(11, HIGH);
  	  digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      delay(300);
      digitalWrite(11, LOW);
  	  digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      delay(300);
    }
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(1000);
    for(i=0;i<10;i++){
      digitalWrite(3, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(300);
      digitalWrite(3, LOW);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      delay(300);
    }
  }
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1500);
  val2=digitalRead(inPin2);
  if(val2==HIGH){
    if(count%2==0) {
      count++;
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      delay(300);
      digitalWrite(3, LOW);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      delay(300);
    }
    else{
      count++;
      digitalWrite(3, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(300);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      delay(300);
    }
  }
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1500);
}