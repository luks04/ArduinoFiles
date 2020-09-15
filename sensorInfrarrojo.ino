//This code is to use with FC51 IR proximity sensor, when it detects an obstacle it lights the internal LED
//of the Arduino Board, refer to Surtrtech for more information

int sensorIR = 8; //Declaring where the Out pin from the sensor is wired
int led = 12;
int lectura;

void setup() {                
  pinMode(led, OUTPUT);   // setting the pin modes, the "13" stands for the internal Arduino uno internal LED  
  pinMode(sensorIR,INPUT); // then we have the out pin from the module

  Serial.begin(9600);
}

void loop() {

  lectura = digitalRead(sensorIR);
  Serial.println(lectura);
  
  if(lectura == 1)      //Check the sensor output if it's high
             {
               digitalWrite(led, LOW);   // Turn the LED on (Yes by writing LOW)
             }
  else
            {
              digitalWrite(led, HIGH);    // Turn the LED OFF if there's no signal on the ProxSensor
             }
  delay(100);
}
