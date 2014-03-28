int left = 5;
int right = 6;

void setup() {
   pinMode(13, OUTPUT);
}

void loop()
{
  for (int i=0; i <= 5; i++){  
    digitalWrite(13,HIGH);
    analogWrite(left, 255);
    analogWrite(right, 175);
    digitalWrite(13,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(13,LOW);
    delay(1000);
   }
  for (int i=0; i <= 5; i++){  
    digitalWrite(13,HIGH);
    analogWrite(left, 175);
    analogWrite(right, 255);
    digitalWrite(13,LOW);
    delay(1000);
  }
}
