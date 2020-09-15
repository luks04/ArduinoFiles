int ledPin = 13;          // pin del led
int estado = 'd';         // inicia apagado
void setup()  { 
  Serial.begin(9600);    // inicia el puerto serial para comunicacion con el módulo Bluetooth
  pinMode(ledPin, OUTPUT);
} 
void loop()  { 
  if(Serial.available()>0){        // lee el bluetooth y almacena en estado
    estado = Serial.read();       // aquí se almacena lo que llegue
  }
  if(estado=='a'){           //Encender LEd
  digitalWrite(ledPin,HIGH);   
  }
  if(estado=='d'){          //Apagar Led 
  digitalWrite(ledPin,LOW);
  }
}
