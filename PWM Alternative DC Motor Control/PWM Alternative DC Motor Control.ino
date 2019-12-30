int motorPin = 9; 
int x = A3;       
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  pinMode(x, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ 
  analogWrite(x,HIGH);
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(motorPin, speed);
    }
  }
} 
