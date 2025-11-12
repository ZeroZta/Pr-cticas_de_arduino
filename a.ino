int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

unsigned long conteo = 0;
unsigned long conteo2 = 0;
int espera = 1000;
byte estadoLed = 0;
byte estadoLed2 = 0;

void setup() {
    pinMode(ledPin1,OUTPUT);
    pinMode(ledPin2,OUTPUT);
    pinMode(ledPin3,OUTPUT);
    }

void loop () {
  /*  
    if(millis()-conteo > 1000 && estadoLed==0){
        conteo = millis();
        digitalWrite(ledPin1,HIGH);
        digitalWrite(ledPin2,HIGH);
        digitalWrite(ledPin3,HIGH);
        estadoLed = 1;
    }
    if(millis()-conteo > 1000 && estadoLed==1){
        conteo = millis();
        digitalWrite(ledPin1,LOW);
        digitalWrite(ledPin2,LOW);
        digitalWrite(ledPin3,LOW);
        estadoLed = 0;
    }
*/ 
    
    if(millis()-conteo > 1000 && estadoLed==0){
        conteo = millis();
        digitalWrite(ledPin1,HIGH);
        estadoLed = 1;
    }
    if(millis()-conteo > 1000 && estadoLed==1){
        conteo = millis();
        digitalWrite(ledPin1,LOW);
        estadoLed = 0;
    }
    
    if(millis()-conteo2 > 1000 && estadoLed2==0){
        conteo2 = millis();
        digitalWrite(ledPin2,HIGH);
        estadoLed2 = 1;
    }
    if(millis()-conteo2 > 1000 && estadoLed2==1){
        conteo2 = millis();
        digitalWrite(ledPin2,LOW);
        estadoLed2 = 0;
    }
    
    }
