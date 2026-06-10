void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
// dot= short beep + red led
void dot() {
  tone(8,800);
  digitalWrite(9,HIGH);
  delay(150);
  digitalWrite(9,LOW);
  noTone(8);
  delay(200);
}
// line= long beep + green led
void line() {
  tone(8,800);
  digitalWrite(10,HIGH);
  delay(450);
  digitalWrite(10,LOW);
  noTone(8);
  delay(200);
}
void letterA() { dot(); line(); }
void letterB() { line(); dot(); dot(); dot(); }
void letterC() { line(); dot(); line(); dot(); }
void letterD() { line(); dot(); dot(); }
void letterE() { dot(); }
void letterF() { dot(); dot(); line(); dot(); }
void letterG() { line(); line(); dot(); }
void letterH() { dot(); dot(); dot(); dot(); }
void letterI() { dot(); dot(); }
void letterJ() { dot(); line(); line(); line(); }
void letterK() { line(); dot(); line(); }
void letterL() { dot(); line(); dot(); dot(); }
void letterM() { line(); line(); }
void letterN() { line(); dot(); }
void letterO() { line(); line(); line(); }
void letterP() { dot(); line(); line(); dot(); }
void letterQ() { line(); line(); dot(); line(); }
void letterR() { dot(); line(); dot(); }
void letterS() { dot(); dot(); dot();}
void letterT() { line(); }
void letterU() { dot(); dot(); line(); }
void letterV() { dot(); dot(); dot(); line(); }
void letterW() { dot(); line(); line(); }
void letterX() { line(); dot(); dot(); line(); }
void letterY() { line(); dot(); line(); line(); }
void letterZ() { line(); line();dot(); dot(); }
void loop() {
  letterH();
  delay(500);
  letterE();
  delay(500);
  letterL();
  delay(500);
  letterL();
  delay(500);
  letterO();
  delay(500);
  delay(1500);
  letterW();
  delay(500);
  letterO();
  delay(500);
  letterR();
  delay(500);
  letterL();
  delay(500);
  letterD();
  delay(500);
  delay(2000);
}
