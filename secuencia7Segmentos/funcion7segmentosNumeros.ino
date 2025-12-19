/*
2 = a
3 = b
4 = c
5 = d
6 = e
7 = f
8 = g
*/

void numero(int valor,int state) {
  switch (valor) {
    case 0:
      for (int i = 2; i < 8; i++) {
        digitalWrite(i, state);
      }
      break;
    case 1:
      for (int i = 3; i < 5; i++) {
        digitalWrite(i, state);
      }
      break;
    case 2:
      for (int i = 2; i < 4; i++) {
        digitalWrite(i, state);
      }
      for (int j = 5; j < 7; j++) {
        digitalWrite(j, state);
      }
      digitalWrite(8, state);
      break;
    case 3:
      for (int i = 2; i < 6; i++) {
        digitalWrite(i, state);
      }
      digitalWrite(8, state);
      break;
    case 4:
      for (int i = 3; i < 5; i++) {
        digitalWrite(i, state);
      }
      for (int j = 7; j < 9; j++) {
        digitalWrite(j, state);
      }
      break;
    case 5:
      for (int i = 7; i < 9; i++) {
        digitalWrite(i, state);
      }
      for (int j = 4; j < 6; j++) {
        digitalWrite(j, state);
      }
      digitalWrite(2, state);
      break;
    case 6:
      for (int i = 4; i < 9; i++) {
        digitalWrite(i, state);
      }
      digitalWrite(2, state);
      break;
    case 7:
      for (int i = 2; i < 5; i++) {
        digitalWrite(i, state);
      }
      break;
    case 8:
      for (int i = 2; i < 9; i++) {
        digitalWrite(i, state);
      }
      break;
    case 9:
      for (int i = 2; i < 6; i++) {
        digitalWrite(i, state);
      }
      for (int j = 7; j < 9; j++) {
        digitalWrite(j, state);
      }
  }
}