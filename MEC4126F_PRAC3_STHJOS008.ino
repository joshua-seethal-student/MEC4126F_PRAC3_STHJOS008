#include <stdbool.h>
#include <LiquidCrystal.h>

//create an instance of the LiquidCrystal class called lcd, initialising the relevant pins

LiquidCrystal lcd(12, 11, 6, 5, 4, 3);

bool alt = false;	// is used in void loop()

struct myData		// declare a struct of type "myData"
{
  uint8_t Age;
  char FirstName[7];
} person;			// create a variable of "myData" called "person"

void setup()
{
  person.Age = 23;
  strcpy(person.FirstName, "Joshua");	// initializing the elements of "person"
  
  lcd.begin(16, 2);		// 16x2 columns x rows display
  
}

void loop()
{
  alt = !alt;	// alternates between true and false
  
  switch (alt)
  {
    case true :
    	lcd.print(person.FirstName);
    	lcd.setCursor(0, 1);	// set position
    	lcd.print(person.Age);
    	delay(200);				// delay by 200 ms
    	lcd.clear();			// clear screen and move cursor to top left corner
    	break;
    case false :
    	lcd.print(person.Age);
    	lcd.setCursor(0, 1);
    	lcd.print(person.FirstName);
    	delay(200);
    	lcd.clear();
    	break;
  }
}