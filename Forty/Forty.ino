int num[10][7] = {
  //2, 3, 4, 5, 6, 7, 8
  //a, b, c, d, e, f, g
  { 1, 1, 1, 1, 1, 1, 0 },  //0
  { 0, 1, 1, 0, 0, 0, 0 },  //1
  { 1, 1, 0, 1, 1, 0, 1 },  //2
  { 1, 1, 1, 1, 0, 0, 1 },  //3
  { 0, 1, 1, 0, 0, 1, 1 },  //4
  { 1, 0, 1, 1, 0, 1, 1 },  //5
  { 1, 0, 1, 1, 1, 1, 1 },  //6
  { 1, 1, 1, 0, 0, 0, 0 },  //7
  { 1, 1, 1, 1, 1, 1, 1 },  //8
  { 1, 1, 1, 1, 0, 1, 1 }   //9
};
int espera = 1000;
byte fila;
byte columna;
byte elemento;
byte d;

void setup() {
  for (d = 2; d < 9; d++) {
    pinMode(d, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  for (fila = 0; fila < 10; fila++) {
    for (columna = 0; columna < 7; columna++) {
      elemento = num[fila][columna];
      if (elemento == 1) {
        digitalWrite(columna + 2, HIGH);
      } else {
        digitalWrite(columna + 2, LOW);
      }
    }
    delay(espera);
  }
}
