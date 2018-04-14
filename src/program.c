void setup(void)
{
	pinMode(20, OUTPUT);
}

void loop(void)
{
	digitalWrite(20, HIGH);
	delay(100);
	digitalWrite(20, LOW);
	delay(100);
}
