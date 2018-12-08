//Addressbook  constructor
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

#include "Addressbook.h"

int main()
{
  cout << "This is the addressbook driver" << endl;
  return 0;
}

void Addressbook::addPerson(std::string firstname, std::string lastname,
                 std::string phone, std::string street,
                 std::string city, std::string zip)// : Person() variables class friends
{
 //set parameters to person? or reverse 
}
void Addressbook::editPerson(std::string firstname, std::string lastname, 
                  std::string phone, std::string street,
                  std::string city, std::string zip) // : Person() variable class friends
{
  //set parameters to person
}
void Addressbook::Display()
{
  //display
}
void Addressbook::sortByLastname()
{
  //rearrange addessbook call Display function
}

void Addressbook::load(std::ifstream inf)
{
  /*
  {
  inf.read((char *) &number, sizeof(number));
  inf.read((char *) name, sizeof(name));
  inf.read((char *) &gpa, sizeof(gpa));
}

  */
}

void Addressbook::save(std::ofstream of)
{
  /*
  
  of.write((char *) &number, sizeof(number));
  of.write((char *) name, sizeof(name));
  of.write((char *)&gpa, sizeof(gpa));
  */
}
  

bool Addressbook::removePerson(string firstname)
{
  //connect to person class
}

bool Addressbook::removePerson(string firstname, string lastname)
{
  //connect to person class
}
  