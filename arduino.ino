const int IN1 = 4;
const int IN2 = 3;
const int IN3 = 2;
const int IN4 = 1;

const int ENA = 5;
const int ENB = 0;
void setup() {
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

 pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);

}

void loop() {

  analogWrite(ENA, 255);
  analogWrite(ENB, 255); 

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
