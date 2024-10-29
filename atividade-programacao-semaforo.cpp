int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
digitalWrite(ledVermelho, HIGH);
digitalWrite(ledAmarelo, LOW);
digitalWrite(ledVerde, LOW);
delay(6000);

digitalWrite(ledVermelho, LOW);
digitalWrite(ledAmarelo, HIGH);
digitalWrite(ledVerde, LOW);
delay(2000);

digitalWrite(ledVerde, HIGH);
digitalWrite(ledVermelho, LOW);
digitalWrite(ledAmarelo, LOW);
delay(2000);

digitalWrite(ledVermelho, LOW);
digitalWrite(ledAmarelo, LOW);
digitalWrite(ledVerde, HIGH);
delay(2000);

digitalWrite(ledVermelho, LOW);
digitalWrite(ledAmarelo, HIGH);
digitalWrite(ledVerde, LOW);
delay(2000);
}

