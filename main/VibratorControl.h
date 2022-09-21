class Vibrator
{
  public:
    unsigned int OUTPUTPIN;

    void setPins(unsigned int outputPin)
    {
      OUTPUTPIN = outputPin;
      pinMode(OUTPUTPIN, OUTPUT);
      //Serial.println("Initialized the pins for outputing signal.");
    }
    void startVibrate()
    {
      digitalWrite(OUTPUTPIN, HIGH);
      delay(2);
      digitalWrite(OUTPUTPIN, LOW);
      delay(2);
    }

    void stopVibrate(int baudRate)
    {
      digitalWrite(OUTPUTPIN, LOW);
      delay(500);
    }
};
