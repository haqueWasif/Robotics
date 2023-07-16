const int ledpin = 13;
bool ledstate = false;

void setup()
{		
    pinMode(ledpin, OUTPUT);   
}

void loop()
{
    ledstate = !ledstate;
  	digitalWrite(ledpin, ledstate);
    delay(1000);
}