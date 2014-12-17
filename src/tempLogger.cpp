/*
leeTemp is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

leeTemp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with leeTemp.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <Arduino.h>
#include "tempLogger.h"


int tempLogger::calculoTemp(int pin){
  int var = 0;
  Vmedido = analogRead(pin);
  Rt = Vmedido * 10000 / (1023 - Vmedido);

  for(int i = 0; i < 50; i++){

    if(Rt > temp[i] * 1000){
      var = i;
      break;
    }

  }
  return var;
}

void checkSleepBehaviour(){
  if(ledEstado){                                                              //Compruebo si se enciende cada 8 segundos
    digitalWrite(13, ledEstado);
  }
  else{
    digitalWrite(13, ledEstado);
  }
  ledEstado=!ledEstado;
}


void pinModeSetup(){
  pinMode(13, OUTPUT);
}


void setup(){
  pinModeSetup();
  checkSleepBehaviour();
}

void loop(){
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);                             //Lo primero que hago es dormir al micro.





}
