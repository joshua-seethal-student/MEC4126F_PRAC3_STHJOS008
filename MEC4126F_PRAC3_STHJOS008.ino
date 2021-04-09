struct myData		// declare a struct of type "myData"
{
  uint8_t Age;
  char FirstName[7];
} person;			// create a variable of "myData" called "person"


void setup()
{
  person.Age = 23;
  strcpy(person.FirstName, "Joshua");	// initializing the elements of "person"
}

void loop()
{

}
