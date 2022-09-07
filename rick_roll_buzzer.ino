
const int buz = 11;
const double A = 440; 
const double B = 493.88;
const double D = 293.66;
const double E = 329.63;
const double Fs = 369.99;
const double G = 392;
const double two = 800;
const double four = 400;
const double eight = 200;
const double six = 100;
const double l = 50;

const int button = 2;
int buttonState = 0;

void setup() {
  pinMode(buz, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
if (buttonState == HIGH) {
  tone(buz, D);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, B);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, B);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, A);
  delay(four);
  noTone(buz);
  delay(l);
  
  tone(buz, D);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, A);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, A);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, D);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(four);
  noTone(buz);
  delay(75);
  
  tone(buz, A);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, Fs);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, D);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, D);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, A);
  delay(four);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(two);
  noTone(buz);
  delay(l);
  
  tone(buz, D);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, B);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, B);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, A);
  delay(four);
  noTone(buz);
  delay(l);
  
  tone(buz, D);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, 587.33);
  delay(four);
  noTone(buz);
  delay(l);
  
  tone(buz, Fs);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(eight);
  noTone(buz);
  delay(75);
  
  tone(buz, D);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, E);
  delay(six);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(four);
  noTone(buz);
  delay(l);
  
  tone(buz, A);
  delay(eight);
  noTone(buz);
  delay(l);

  tone(buz, Fs);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, D);
  delay(eight);
  noTone(buz);
  delay(100);

  tone(buz, D);
  delay(eight);
  noTone(buz);
  delay(l);
  
  tone(buz, A);
  delay(four);
  noTone(buz);
  delay(l);
  
  tone(buz, G);
  delay(two);
  noTone(buz);
  delay(l);

} else {
  noTone(buz);
}
}
