void displayOnLEDs(uint8_t number);

struct AgeData
{
  uint8_t BirthDateOfMonth;
  uint8_t BirthMonth;
  uint16_t BirthYear;
  uint8_t Age;
}
myAge;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
  myAge.BirthDateOfMonth = 31;
  myAge.BirthMonth = 5;
  myAge.BirthYear = 1997;
  myAge.Age = 23;
}

void loop()
{
  for (uint8_t i = 0; i <= myAge.Age; i++)
  {
    displayOnLEDs(i);
    delay(100);
  }
}

void displayOnLEDs(uint8_t number);
{
  for (uint8_t i = 0; i < 8; i++)
  {
    digitalWrite(i, (number & (0b1 << i)) ? HIGH : LOW);
  }
}