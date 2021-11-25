const int sensor = 4;
const int led = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(sensor)){
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
    Serial.println("Objeto Detectado");
  }else{
    digitalWrite(led,LOW);
    Serial.println("Objeto No Detectado");
    delay(1000);
 
  } 
}
