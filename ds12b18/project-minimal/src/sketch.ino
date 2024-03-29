#include <OneWire.h>
#include <DallasTemperature.h>

DallasTemperature dallas(new OneWire(3));

void setup() {
    Serial.begin(9600);
    
    dallas.begin();
}
 
void loop() {
    dallas1.requestTemperatures();
    
    Serial.print("temperature: ");
    Serial.print(dallas.getTempCByIndex(0));

    delay(1000);
}

