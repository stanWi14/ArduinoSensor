/*if you want to see the circuit and try this code visit the link below
https://www.tinkercad.com/things/6EzGOqUxZ3w
*/
#define echoPin 2
#define trigPin 3
#define redled 9 
#define yellowled 10 
#define greenled 11
#define buzz 6
double duration, distance;
 
void setup(){
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode (redled, OUTPUT);
  pinMode (yellowled, OUTPUT);
  pinMode (greenled, OUTPUT);
}
 
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration/58.2; 
Serial.print(distance / 100);
Serial.println(" meter");
if(distance < 200){
  digitalWrite(redled,HIGH);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
  digitalWrite(buzz,HIGH);
}else if(distance <= 300){
  digitalWrite(yellowled,HIGH);
  digitalWrite(redled,LOW);
  digitalWrite(greenled,LOW);
  digitalWrite(buzz,LOW);
}else{
  digitalWrite(greenled,HIGH);
  digitalWrite(yellowled,LOW);
  digitalWrite(redled,LOW);
  digitalWrite(buzz,LOW);
}
delay(50);
}
 