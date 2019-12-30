#define DC_MOTOR_PIN 2
int button = 3;
const int ledPin = 13;
int buttonstate = 0;


void setup() {
  /* Initialize DC motor control pin as digital output */
  pinMode( DC_MOTOR_PIN, OUTPUT );
  pinMode(ledPin,  OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  
}

void loop() {

  int buttonstate = digitalRead(button);
  Serial.println(button);
  delay(1);
  digitalRead(button);
  if (buttonstate == HIGH)
    {
  digitalWrite( DC_MOTOR_PIN, 255 );
  digitalWrite(13, HIGH);
  /* Let it run for a while */
  delay( 10 );
  }
  else
  {
  /* Stop motor */
  digitalWrite( DC_MOTOR_PIN, LOW );
  digitalWrite(13, LOW); 
  /* Do nothing */
  
  }
}
