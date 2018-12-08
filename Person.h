//Person helper file blueprints

#ifndef PERSON_H
#define PERSON_H

class Person
{
  private:
    std::string firstname;
    std::string lastname;
    std::string phone;
    std::string street;
    std::string city;
    std::string zip;
  public:
    Person();
    ~Person();
    void setFirstname(std::string f);
    void setLastname(std::string l);
    void setPhone(std::string p);
    void setStreet(std::string st);
    void setCity(std::string c);
    void setZip(std::string z);
    
    std::string getFirstname();
    std:string getLastname();
    std::string getPhone();
    std::string getStreet();
    std::string getCity();
    std::string getZip();
    
};

#endif