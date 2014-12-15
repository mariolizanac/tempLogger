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


#ifndef tempLogger_h
#define tempLogger_h
#include <Arduino.h>

class tempLogger
{
public:
  int calculoTemp(int pin);

  int temperatura;
  float Vmedido;
  float Rt;
  float temp[50]=
                        {31.3081, 29.7487,  28.2860, 26.8848, 25.5702,
                        24.3274, 23.1523, 22.0407, 20.9889, 19.9934,
                        19.0509, 18.1582, 17.3124, 16.5109, 15.7511,
                        15.0306, 14.3472, 13.6987, 13.0833, 12.4990,
                        11.9441, 11.4169, 10.9161, 10.4400, 10.0000,
                        9.55693, 9.14743, 8.75777, 8.38690, 8.03380,
                        7.69753, 7.37721, 7.07200, 6.78110, 6.50378,
                        6.23934, 5.98711, 5.74646, 5.51680, 5.29758,
                        5.08828, 4.88838, 4.69743, 4.51498, 4.34060,
                        4.17391, 4.01452, 3.86207, 3.71624, 3.58800};


    /*Impedance values for each temperature, from 0ºC upto 50ºC.*/
};


#endif
