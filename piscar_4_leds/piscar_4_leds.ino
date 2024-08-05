//c++
void setup() {
//pisca dois leds
//declarar as variáveis
pinMode (5, OUTPUT);
pinMode (4, OUTPUT);
pinMode (3, OUTPUT);
pinMode (2, OUTPUT);
}

void loop() {
  // liga os 3 leds
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (2, HIGH);
//  esperar um segundo
delay (1000);
//desliga os 3 leds
  digitalWrite (5, LOW);
  digitalWrite (4, LOW);
  digitalWrite (3, LOW);
  digitalWrite (2, LOW);
// esperar 1 segundo
delay (1000);
}
