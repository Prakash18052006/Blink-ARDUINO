const int led =7;
void setup() {
 
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);  
  delay(1000);                      
  digitalWrite(led, LOW);  
  delay(1000);                    
}
