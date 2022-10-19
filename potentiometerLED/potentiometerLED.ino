/*if you want to see the circuit and try this code visit the link below
https://www.tinkercad.com/things/gbPTgVXP0Hz
*/
int led = 7;
int potenti = A0;
void setup(){
  pinMode(potenti, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
  int Potentio = analogRead(potenti);
  // so the led only have range between 0-255
  // and the potentio have range between 0-1023
  Potentio = map(Potentio, 0, 1023, 255, 0);
  Serial.println(Potentio);
  analogWrite(led,Potentio);
}