// A2 as trigger, A3 as Echo 
unsigned int ECHOPIN = A3;
unsigned int TRIGPIN = A2;

unsigned long Time_Echo_us = 0;
unsigned long Len_MM_X100 = 0;
unsigned long Len_int = 0;
unsigned int Len_frac = 0;

void setup() 
{
  // Baudrate set to 9600
  Serial.begin(9600);
  //TRIG sends Trigger signal, EcCHO receives signal
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  Serial.println("Setup complete!");
}

void loop() 
{
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(15);
  digitalWrite(TRIGPIN, LOW);

  Time_Echo_us = pulseIn(ECHOPIN, HIGH);

  if ((Time_Echo_us < 60000) && (Time_Echo_us > 1))
  {
    Len_MM_X100 = (Time_Echo_us * 34) / 2;
    Len_int = Len_MM_X100/100;
    Len_frac = Len_MM_X100%100;
    Serial.print("Present Length is: ");
    //Serial.print(Time_Echo_us, DEC);
     Serial.print(Len_int, DEC);
    Serial.print(".\n");

    if(Len_frac < 10)
    {
      Serial.print("0");
      //Serial.print(Time_Echo_us, DEC);
     Serial.print(Len_frac, DEC);
      Serial.println("mm");
      }

      delay(1000);
    }
}
