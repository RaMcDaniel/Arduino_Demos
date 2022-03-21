byte red1 = A5;
byte yellow2 = A4;
byte blue3 = A3;
byte white4 = A2;
int waitTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(blue3, OUTPUT);
  pinMode(white4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, LOW);
  delay(waitTime);

  digitalWrite(red1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, HIGH);
  delay(waitTime);
  
  digitalWrite(red1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, LOW);
  delay(waitTime);

  digitalWrite(red1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, HIGH);
  delay(waitTime);

  digitalWrite(red1, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, LOW);
  delay(waitTime);

    digitalWrite(red1, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, HIGH);
  delay(waitTime);

  digitalWrite(red1, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, LOW);
  delay(waitTime);

  digitalWrite(red1, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, HIGH);
  delay(waitTime);

    digitalWrite(red1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, LOW);
  delay(waitTime);

  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, HIGH);
  delay(waitTime);

  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, LOW);
  delay(waitTime);

  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, HIGH);
  delay(waitTime);

  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, LOW);
  delay(waitTime);

  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, LOW);
  digitalWrite(white4, HIGH);
  delay(waitTime);
  
  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, LOW);
  delay(waitTime);

  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(blue3, HIGH);
  digitalWrite(white4, HIGH);
  delay(waitTime);

}
