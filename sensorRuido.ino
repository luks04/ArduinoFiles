int soundDigital = 8;
int soundAnalog = A0;
int ledRojo = 13;
int ledAmarillo = 12;
int ledVerde = 11;

int soundD; // Datos digitales
int soundA; // Datos análogos

void setup() {
  // put your setup code here, to run once:
  pinMode(soundDigital, INPUT);
  pinMode(soundAnalog, INPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
//  soundD = digitalRead(soundDigital);
//  Serial.println("Datos Digitales: ");
//  Serial.println(soundD);
//  delay(1000);

  soundA = analogRead(soundAnalog);
  Serial.println("Datos Analogos: ");
  Serial.println(soundA);
  delay(500);

  if (soundA <= 17){
    digitalWrite(ledRojo,HIGH);
    digitalWrite(ledAmarillo,LOW);
    digitalWrite(ledVerde,LOW);
  } else if (soundA == 18){
    digitalWrite(ledRojo,HIGH);
    digitalWrite(ledAmarillo,HIGH);
    digitalWrite(ledVerde,LOW);
  }else{
    digitalWrite(ledRojo,HIGH);
    digitalWrite(ledAmarillo,HIGH);
    digitalWrite(ledVerde,HIGH);
  }

}
