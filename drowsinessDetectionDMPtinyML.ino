#include "IMPU.h"
#include "SampleConfig.h"
#include <EloquentTinyML.h>
#include <eloquent_tinyml/tensorflow.h>
#include "model.h"

#define N_INPUTS 3
#define N_OUTPUTS 1

#define TENSOR_ARENA_SIZE 2*1024

//Eloquent::TinyML::TfLite<N_INPUTS, N_OUTPUTS, TENSOR_ARENA_SIZE> ml(model);

SampleConfig config;
IMPU& mpu = config.getMPU();

const int ledPin = 4, buzzerPin = 5;
int microsleepFlag = 0, countMicrosleep = 0;
int startMillis;
int loopCount = 0;
int initialLoops = 20;

void setup() {
    Serial.begin(115200);

    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);

    Serial.println("\n//////////////// DEVICE STARTING ////////////////\n");
    delay(3000);
    Serial.println("\nThe device should be held still. \nDon't touch it until you see a finish message.\n");
    delay(3000);
  
    while (!Serial);
    mpu.Init();

    while (!model.begin()) {
        Serial.print("Error in NN initialization: ");
        Serial.println(model.getErrorMessage());
    }

    Serial.println();
    Serial.println("y,p,r,target");

}

void loop() {
    float y, p, r;

    if( loopCount >= initialLoops ){
      //everything here
    }
    mpu.getYawPitchRoll(y, p, r);

    Serial.print(y);
    Serial.print(",");
    Serial.print(p);
    Serial.print(",");
    Serial.print(r);
    Serial.print(",");

    if( (p > 18 || p < -18 ) || (r > 45 || r < -25)){
//    if(y_pred = 1){
      
      //flash led & buzzer
      digitalWrite (ledPin, HIGH);  // turn on the LED
//      digitalWrite(buzzerPin, HIGH); // turn on Piezo Buzzer
      delay(50);  // wait for half a second or 500 milliseconds
      digitalWrite (ledPin, LOW);  // turn off the LED
//      digitalWrite(buzzerPin, LOW); // turn on Piezo Buzzer
      delay(50);  // wait for half a second or 500 milliseconds

      if(microsleepFlag == 0){
        startMillis = millis();
//        Serial.print("Microsleep Detected at ");Serial.print(startMillis);Serial.println("ms");

      }
      microsleepFlag = 1;
      ++countMicrosleep;
      
    } else {
      
      if( microsleepFlag = 1 && countMicrosleep != 0 ){
        int stopMillis = millis();
        int microsleepDuration = stopMillis - startMillis;
//        Serial.print("counter= ");Serial.println(countMicrosleep);
//        Serial.println("-----------------------------------------");
//        Serial.print("You were asleep for= ");Serial.print(microsleepDuration);Serial.println("ms");
//        Serial.println("-----------------------------------------");
        //Serial.print("Started sleeping at=");Serial.print(startMillis);Serial.println("ms");
        //Serial.print("Stopped sleeping at=");Serial.print(stopMillis);Serial.println("ms");
//        Serial.println("-----------------------------------------");
        countMicrosleep = 0;
        microsleepFlag = 0;
//        delay(1000);
      }
      
    }

    float x = 3.14f / 20.0f;
    float input[3] = { y,p,r };
//    float y_pred = ml.predict(input);
    float y_pred = model.predict(input);

    Serial.println(microsleepFlag);
    Serial.print("prediction = ");
    Serial.println(y_pred);

    delay(10);
}
