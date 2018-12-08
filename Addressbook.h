//addressbook helper file
#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
//#include "Person.h"
class Addressbook // : public Person 
{
  private:
  //use person private variables
  public:
  void addPerson(std::string firstname, std::string lastname,
                 std::string phone, std::string street,
                 std::string city, std::string zip); // : Person() variables class friends
  void editPerson(std::string firstname, std::string lastname, 
                  std::string phone, std::string street,
                  std::string city, std::string zip); // : Person() variable class friends
  void sortByLastname();
  void load(std::ifstream inf);
  void save(std::ofstream of);
  void Display();
  
  bool removePerson(string firstname);
  bool removePerson(string firstname, string lastname);
  
};

#endnif