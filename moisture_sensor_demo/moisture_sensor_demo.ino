int msensor = 4; // moisture sensor is connected with digital pin4 of the Arduino 
int led = 13; 
boolean flag = false; 
void setup() {
  Serial.begin(9600);
  pinMode(msensor, INPUT);
  pinMode(led, OUTPUT);  
}

void loop() {


  
  if ( (digitalRead(msensor) == HIGH  ) && ( flag == false ) )
{
  digitalWrite(led, HIGH);  
  flag = true; 
  delay(1000); 
}

  if ( (digitalRead(msensor) == LOW  ) && ( flag == true ) )
{
  digitalWrite(led, LOW); 
  flag = false; 
  delay(1000); 
}


  delay(1000);      
}
