//c++
void setup() {
//pisca dois leds
//declarar as variáveis
pinMode (8, OUTPUT);
pinMode (4, OUTPUT);
pinMode (3, OUTPUT);
}

void loop() {
  // liga os 3 leds
  digitalWrite (8, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
//  esperar um segundo
delay (1000);
//desliga os 3 leds
  digitalWrite (8, LOW);
  digitalWrite (4, LOW);
  digitalWrite (3, LOW);
// esperar 1 segundo
delay (1000);
}
