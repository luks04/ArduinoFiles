int mqSignal = 0;
int aire = 12;
int co2 = 11;
int gas = 10;

void setup() {
  Serial.begin(9600);
  pinMode(aire, OUTPUT);
  pinMode(co2, OUTPUT);
  pinMode(gas, OUTPUT);

  digitalWrite(aire, LOW);
  digitalWrite(co2, LOW);
  digitalWrite(gas, LOW);
}

void loop() {
  mqSignal = analogRead(0);
  Serial.print(mqSignal, DEC);
  Serial.println(" ppm");

  if(mqSignal <= 55){
    Serial.println("Aire normal");
    digitalWrite(aire, LOW);
    digitalWrite(co2, LOW);
    digitalWrite(gas, LOW);
    delay(50);
  }

  if(mqSignal >= 56 && mqSignal <= 65){
    Serial.println("Aire con un poco de CO2");
    digitalWrite(aire, HIGH);
    digitalWrite(co2, LOW);
    digitalWrite(gas, LOW);
    delay(500);
  }

  if(mqSignal >= 74 && mqSignal <= 350){
    Serial.println("Dioxido de carbono CO2");
    digitalWrite(aire, LOW);
    digitalWrite(co2, HIGH);
    digitalWrite(gas, LOW);
    delay(500);
  }

  if(mqSignal >= 400){
    Serial.println("Gas Propano y Butano");
    digitalWrite(aire, LOW);
    digitalWrite(co2, LOW);
    digitalWrite(gas, HIGH); // Gas Propano y Butano
    delay(500);
  }

}
