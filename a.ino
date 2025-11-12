int red = 2;
int green = 3;
int blue = 4;
unsigned long redCounter = 0;
unsigned long greenCounter = 0;
unsigned long blueCounter = 0;
byte ledStateRed = 0;
byte ledStateGreen = 0;
byte ledStateBlue = 0;

void setup() {
    pinMode(red,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);
    }

void loop () {
  

  funcionLedSelector(red, 10000, 1800);
  funcionLedSelector(blue, 1000, 1800);
  funcionLedSelector(green, 40000, 1800);


}

