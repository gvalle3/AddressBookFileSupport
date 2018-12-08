//addressbook constructor

#include <iostream
#include <fstream>
#include <string>
#include "Person.h"

int main()
{
  cout << "Person class blueprints" << endl;
  return 0;
}


Person::Person()
{
  cout << "Person Constructor" << endl;
}
Person::~Person()
{
  cout << "Person Destructor" << endl;
}
void Person::setFirstname(string f)
{
  firstname = f;
}
void Person::setLastname(string l)
{
  lastname = l;
}
void Person::setPhone(string p)
{
  phone = p;
}
void Person::setStreet(string st)
{
  street = st;
}
void Person::setCity(string c)
{
  city = c;
}
void Person::setZip(string z)
{
  zip = z;
}
    
string Person::getFirstname(){
  return firstname;
}
string Person::getLastname(){
  return lastname;
}
string Person::getPhone(){
  return phone;
}
string Person::getStreet(){
  return street;
}
string Person::getCity(){
  return city;
}
string Person::getZip(){
  return zip;
}