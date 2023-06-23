int b1 = 0;
int b2 = 2;
int b3 = 14;
int b4 = 12;
int r = 16;
int g = 5;
int b = 4;
void setup() {
  Serial.begin(9600);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
}

void loop() {
if (digitalRead(b1) == 0) {
    analogWrite(r, 1023);
    analogWrite(g, 0);
    analogWrite(b, 0);
  }
  else if (digitalRead(b2) == 0){
    analogWrite(r, 0);
    analogWrite(g, 1023);
    analogWrite(b, 0);
  }
  else if (digitalRead(b3) == 0){
    analogWrite(r, 0);
    analogWrite(g, 0);
    analogWrite(b, 1023);
  }
  else if (digitalRead(b4) == 0){
    analogWrite(r, 152);
    analogWrite(g, 50);
    analogWrite(b, 255);
  }
  else{
    analogWrite(r, 0);
    analogWrite(g, 0);
    analogWrite(b, 0);
    }
}
