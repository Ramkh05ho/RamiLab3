
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t blue;
uint16_t green;
uint16_t red;

void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
}

void loop() {

  delay(500);
  blue = rand() % 256;
  red = rand() % 256;
  green = rand() % 256;
  analogWrite(D7, blue);
  analogWrite(D6, green);
  analogWrite(D5, red);  
}