int pinTrig = 10;
int pinEcho = 9;
int pinLed = 12;

long distancia;
long tiempo;

void setup(){
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);

  pinMode(pinLed, OUTPUT);

  Serial.begin(9600);
  
}

void loop(){
  digitalWrite(pinTrig,LOW);
  delayMicroseconds(5);
  digitalWrite(pinTrig,HIGH);
  delayMicroseconds(10);

  tiempo = pulseIn(pinEcho,HIGH);
  distancia = int(0.017*tiempo);

  Serial.println("Distancia: ");
  Serial.println(distancia);
  Serial.println(" cm");

  if (distancia < 50){
    digitalWrite(pinLed,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(pinLed,LOW);
    delay(1000);
  }
}
