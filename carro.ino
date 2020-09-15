int pinTrig = 2;
int pinEcho = 3;
int pin_1_Motor1 = 5;
int pin_2_Motor1 = 6;
int pin_1_Motor2 = 9;
int pin_2_Motor2 = 10;

long distancia;
long tiempo;

void setup(){
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);

  pinMode(pin_1_Motor1,OUTPUT);
  pinMode(pin_2_Motor1,OUTPUT);
  pinMode(pin_1_Motor2,OUTPUT);
  pinMode(pin_2_Motor2,OUTPUT);

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
    digitalWrite(5,1);
    digitalWrite(10,1);
    digitalWrite(6,0);
    digitalWrite(9,0);
    delay(1000);
  }
  else{
    digitalWrite(5,0);
    digitalWrite(10,0);
    digitalWrite(6,1);
    digitalWrite(9,1);
    delay(1000);
  }
}
