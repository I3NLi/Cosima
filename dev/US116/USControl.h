class USControl
{
  public:
    unsigned int ECHOPIN;
    unsigned int TRIGPIN; 

    unsigned long echoTime = 0;
    unsigned long distMM = 0;
    unsigned long distFrac = 0;


    void setPins(unsigned int inputPin,unsigned int triggerPin)
    {
      ECHOPIN = inputPin;
      TRIGPIN = triggerPin;
      pinMode(ECHOPIN, INPUT);
      pinMode(TRIGPIN, OUTPUT); 
      Serial.println("Initialized baud rate and pins.");   
    }

    void setBaudRate(int baudRate)
    {
     Serial.begin(baudRate); 
     Serial.println("Set baud rate to: \n"); 
     Serial.print(baudRate, DEC);
     Serial.print(".\n");
    }

    /* setAdress(int adress)
    {
      
    }*/

    void detectPulse()
    {
      digitalWrite(TRIGPIN, HIGH);
      delayMicroseconds(15);
      digitalWrite(TRIGPIN, LOW);
      echoTime = pulseIn(ECHOPIN, HIGH);
      if ((echoTime < 60000) && (echoTime > 1))
      {
        distMM = (echoTime * 34) / 200;
        distFrac = ((echoTime * 34) / 2)%100;
        Serial.print("Present Distance is: ");
        Serial.print(distMM, DEC);
        Serial.println(" mm.");
      }
      delay(1000);
    }
}; 
