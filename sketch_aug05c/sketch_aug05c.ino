void setup() {
  //pisca dois leds
  // declarar as variáveis
pinMode (8, OUTPUT);
pinMode (4, OUTPUT);
}

void loop() {
  // liga os leds
digitalWrite (4, HIGH);
digitalWrite (8, HIGH);
//espera 1 segundo
delay (1000);
//desliga os leds
digitalWrite (4, LOW);
digitalWrite (8, LOW);
delay (1000);
}
