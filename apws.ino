//this code you have to 
//you can change the pin no. as you want i have taken as my choice
int water;
void setup() {
  pinMode(5,OUTPUT); 
  pinMode(8,INPUT); 
}

void loop() { 
  water = digitalRead(6);  
  if(water == HIGH) 
  {
  digitalWrite(3,LOW); 
  }
  else
  {
  digitalWrite(3,HIGH); 
  }
  delay(400); 
}

