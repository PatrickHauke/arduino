#include <dht.h>

#include <DHT.h>
#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;
double humi_set = 34.00; // Ideal humidity for room
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
  pinMode(8, OUTPUT);
 
 
}
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    if (DHT.humidity <= humi_set){
      digitalWrite(8, LOW);
    }
    else {
      digitalWrite(8, HIGH);
    }
    delay(10000);//Wait 2 seconds before accessing sensor again.
 // 300,000 for every 5 minutes (1000 * 60s)
  // Fastest readout should be once every two seconds for testing.
 
}


