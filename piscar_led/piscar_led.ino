//c++
//programa que envia sinal alto para a saída 4, 
//aguarda 1 segundo e envia sinal baixo para a saída 4

void setup() {
pinMode (4, OUTPUT);
//porta configurada como saída
}

void loop() {
//  envia sinal alto
digitalWrite (4, HIGH);
delay (1000);
//envia sinal baixo
digitalWrite (4, LOW);
delay (1000);
}
