const int pir = 2;
const int led = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(pir, INPUT);
  pinMode(led , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(pir);
  Serial.println(val);
  delay(1000);
  if(val == 1){
    digitalWrite(led , HIGH);
    Serial.println("LED is On");
  }
  else
  {
    digitalWrite(led , LOW);
    Serial.println("LED is Off");
  }
}
