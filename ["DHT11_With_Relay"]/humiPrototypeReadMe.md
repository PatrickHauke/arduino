The purpose of this project was to automate a humidifier. A short extension cable is spliced into a two channel relay. 
The hardware used was an Arduino Uno, DHT11 Humi_01 sensor from OSEPP, SainSmart 2 channel Relay, several jumpers, and breadboard. 

The wiring is as followed:
  On the Arduino 
                - A0 is wired to DHT11 Signal input.
                - D8 is wired to IN2 on the 2 channel relay
                - 5V is wired to the positive line on the breadboard
                - Ground is wired to the negative line on the breadboard
                 
  From the Relay
                - VCC to positive line on breadboard
                - S to negative line on breadboard
                 
  From DHT11     
                - Negative wired to negative on breadboard
                - Positive wired to positive on breadboard
  
  The DHT11 Sensor is plugged on to the breadboard 
  All connections meant for the sensor are wired to the respective connections via jumpers
