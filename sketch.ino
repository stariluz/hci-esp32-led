int led=4;
int btn=14;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  int edoBtn=digitalRead(btn);
  digitalWrite(led, edoBtn);
  delay(50);
}