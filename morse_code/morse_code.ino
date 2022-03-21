int dit = 100;
int dah = 300;
byte greenLED = A3;
int newLetter = 600;


void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(A3,OUTPUT);
  digitalWrite(13, HIGH);
  delay(500); //To indicate program is starting
  digitalWrite(13, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(newLetter*2);

  //S of SOS
  digitalWrite(greenLED, HIGH);
  delay(dit); 
  digitalWrite(greenLED, LOW);
  delay(dit); 
  digitalWrite(greenLED, HIGH);
  delay(dit); 
  digitalWrite(greenLED, LOW);
  delay(dit); 
  digitalWrite(greenLED, HIGH);
  delay(dit); 
  digitalWrite(greenLED, LOW);
  delay(newLetter);


//O of SOS
  digitalWrite(greenLED, HIGH);
  delay(dah); 
  digitalWrite(greenLED, LOW);
  delay(dah); 
  digitalWrite(greenLED, HIGH);
  delay(dah); 
  digitalWrite(greenLED, LOW);
  delay(dah);  
 digitalWrite(greenLED, HIGH);
  delay(dah); 
  digitalWrite(greenLED, LOW);
  delay(newLetter); 


  //S of SOS
  digitalWrite(greenLED, HIGH);
  delay(dit); 
  digitalWrite(greenLED, LOW);
  delay(dit); 
  digitalWrite(greenLED, HIGH);
  delay(dit); 
  digitalWrite(greenLED, LOW);
  delay(dit); 
  digitalWrite(greenLED, HIGH);
  delay(dit); 
  digitalWrite(greenLED, LOW);
  delay(newLetter);
  
  

}
