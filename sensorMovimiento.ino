int s_pir = 13;
int led = 12;
int lectura;

void setup() {
  // put your setup code here, to run once:
  pinMode(s_pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lectura = digitalRead(s_pir);
  Serial.println(lectura);
  if (lectura == 1){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
