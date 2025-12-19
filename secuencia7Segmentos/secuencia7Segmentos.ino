// C++ code
int espera = 1000;

void setup()
{
  for (int definition = 2; definition < 9; definition++){
    pinMode(definition,OUTPUT);
  }
}

void loop()
{
  for (int k = 0; k < 10; k++){
    numero(k,HIGH);
    delay(espera);
    numero(k,LOW);
  }
}