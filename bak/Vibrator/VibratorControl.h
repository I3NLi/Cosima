class Vibrator
{
  public:
    unsigned int OUTPUTPIN;

    void startVibrate(unsigned int outputPin)
    {
      OUTPUTPIN = outputPin;
      pinMode(OUTPUTPIN, OUTPUT);
      digitalWrite(OUTPUTPIN, HIGH);
      delay(2);
      digitalWrite(OUTPUTPIN, LOW);
      delay(2);
      digitalWrite(OUTPUTPIN, LOW);
    }

    void stopVibrate()
    {
      digitalWrite(OUTPUTPIN, LOW);
    }
};
