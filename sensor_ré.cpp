

  
  const int echoPin = 7;
  const int trigPin = 6;
  
Ultrasonic ultrasonic(trigPin,echoPin);

  int distancia;
  String result;
  


void setup() {
  
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  
    Serial.begin(9600);
 
}

void loop() {
  
  hcsr04();
  Serial.print("Distancia");
  Serial.print(result);
  Serial.println("cm");
  
}
void hcsr04(){
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  distancia = (ultrasonic.Ranging((CM));
  result = String(distancia);
  delay(500);

  
  
}
