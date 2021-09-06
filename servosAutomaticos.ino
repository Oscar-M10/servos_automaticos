
#include <Servo.h>

Servo servo1;

void setup() 
{
  servo1.attach(7,600,1500);
}

void loop() 
{
  servo1.write(0);
  delay(700);

  servo1.write(90);
  delay(700);

  servo1.write(180);
  delay(700);

}
