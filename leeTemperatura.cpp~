#include "variablesGlobales.h"
#include <Arduino.h>

float Vmedido;                    
int i;
int temperatura;
float Rt;
float temp[50]=            {31.3081, 29.7487,  28.2860, 26.8848, 25.5702,  
                            24.3274, 23.1523, 22.0407, 20.9889, 19.9934, 
                            19.0509, 18.1582, 17.3124, 16.5109, 15.7511, 
                            15.0306, 14.3472, 13.6987, 13.0833, 12.4990, 
                            11.9441, 11.4169, 10.9161, 10.4400, 10.0000,
                            9.55693, 9.14743, 8.75777, 8.38690, 8.03380,
                            7.69753, 7.37721, 7.07200, 6.78110, 6.50378,
                            6.23934, 5.98711, 5.74646, 5.51680, 5.29758,
                            5.08828, 4.88838, 4.69743, 4.51498, 4.34060,
                            4.17391, 4.01452, 3.86207, 3.71624, 3.58800};

/*Datos de la impedancia del sensor desde cero grados hasta cincuenta.*/




int calculoTemp(int pin){
  int indice;
  
  Vmedido=analogRead(pin);                                
  Rt=Vmedido*10000/(1023-Vmedido);
  for(i=1; i<=50; i++){                        //Recorro el vector temp[]
    if(Rt>temp[i]*1000){
      indice=i;
      break;                                   //Cuando llegue a la temperatura actual salgo del for
    }
  }
  
  return indice;                              //Devuelvo la temperatura.
}

