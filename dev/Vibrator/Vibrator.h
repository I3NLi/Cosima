class Vibrator
{
  public:
    unsigned int connectPins;
    unsigned int dutyRatio;
    bool reverse;
    void initializeVibrator(unsigned int pin, unsigned int DutyRatio);
    void startVibrate(void);
    void stopVibrate(void);
};

void Vibrator::initializeVibrator(unsigned int pin, unsigned int DutyRatio)
{
  connectPins = pin;
  dutyRatio = DutyRatio;
  pinMode(connectPins, OUTPUT);
  digitalWrite(connectPins, HIGH);
}

void Vibrator::startVibrate(void)
{
  if (!reverse)
  {
    while (1)
    {
      digitalWrite(connectPins, !digitalRead(connectPins));
      vTaskDelay(100 / dutyRsatio);
    }
  }
  else
  {
    while (1)
    {
      digitalWrite(connectPins, !digitalRead(connectPins));
      vTaskDelay(100 / dutyRatio);
    }
  }
}

void Vibrator::stopVibrate(void)
{
  digitalWrite(connectPins, HIGH);
}
