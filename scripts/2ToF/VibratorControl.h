class Vibrator
{
  public:
    unsigned int OUTPUTPIN;
    bool isReverse;
    
    void startVibrate(unsigned int outputPin, connectMode)
    {
      OUTPUTPIN = outputPin;
      switch 
      pinMode(OUTPUTPIN, OUTPUT);
      digitalWrite(OUTPUTPIN, HIGH);
      delay(2);
      digitalWrite(OUTPUTPIN, LOW);
      delay(2);
    }

    void stopVibrate()
    {
      digitalWrite(OUTPUTPIN, LOW);
    }
};
