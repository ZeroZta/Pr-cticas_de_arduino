void funcionLedSelector(int led, int encendido, int apagado){
  switch(led){
    case 2:
      //cambios en el led rojo
      if(millis()- redCounter > apagado && ledStateRed==0){
        digitalWrite(red, HIGH);
        ledStateRed = 1;
        redCounter = millis();
      }
      if(millis()- redCounter > encendido && ledStateRed==1){
        digitalWrite(red, LOW);
        ledStateRed = 0;
        redCounter = millis();
      }
    break;

    case 3: 
      //cambios en el led verde
      if(millis()- greenCounter > apagado && ledStateGreen==0){
        digitalWrite(green, HIGH);
        ledStateGreen = 1;
        greenCounter = millis();
      }
      if(millis()- greenCounter > encendido && ledStateGreen==1){
        digitalWrite(green, LOW);
        ledStateGreen = 0;
        greenCounter = millis();
      }
    break;

    case 4:
      //cambios en el led azul
      if(millis()- blueCounter > apagado && ledStateBlue==0){
        digitalWrite(blue, HIGH);
        ledStateBlue = 1;
        blueCounter = millis();
      }
      if(millis()- blueCounter > encendido && ledStateBlue==1){
        digitalWrite(blue, LOW);
        ledStateBlue = 0;
        blueCounter = millis();
      }
    break;
  }
  
  


}