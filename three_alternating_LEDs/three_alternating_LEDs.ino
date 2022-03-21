void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(A3, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(A3, LOW);
  delay(1000);

  digitalWrite(13, HIGH);
  digitalWrite(A2, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(A2, LOW);
  delay(1000);

  digitalWrite(13, HIGH);
  digitalWrite(A1, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(A1, LOW);
  delay(1000);

}
