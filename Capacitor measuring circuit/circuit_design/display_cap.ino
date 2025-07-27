#include <FreqMeasure.h>
void setup() 
{
  Serial.begin(57600);
  FreqMeasure.begin();
}

double sum = 0;
int count = 0;
void loop() 
{
  if (FreqMeasure.available()) {
    Serial.println("Frequency measurement available.");
    sum += FreqMeasure.read();
    count++;
    if (count > 30) {
      float frequency = FreqMeasure.countToFrequency(sum / count);
      Serial.println(frequency);
      sum = 0;
      count = 0;
    }
  }
}