int R = D1;
int G = D2;
int B = D3;
void son() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);
Serial.begin(9600);
}
void pop() {
// กำหนด LED สีขาว
analogWrite(R, 255);
analogWrite(G, 128);
analogWrite(B, 100);
delay(500);
}
