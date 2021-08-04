#pragma once
#include "Animal.h"
#include <iostream>

class Sheep:public Animal{
  public:
    Sheep(std::string name):Animal(name),strzyzenie(false){};
    void print()const override
    {
      std::cout<<"- Owca "<<name();
      if(strzyzenie)
      {
        std::cout<<" ostrzyzona";
      }else
      {
        std::cout<<" nieostrzyzona";
      }     
    }

    void shear()
    {
      strzyzenie=true;
    }

    ~Sheep()
    {
      if(strzyzenie)
      {
      std::cout<<"- Owca "<<name()<<" ostrzyzona wraca do zagrody\n";
      }
      else
      {
        std::cout<<"- Owca "<<name()<<" nieostrzyzona wraca do zagrody\n";
      }
  }
  private:
    bool strzyzenie;
};

class Cow:public Animal{
  public:
    Cow(const std::string &name):Animal(name){};
    void print()const override
    {
      std::cout<<"- Krowa "<<name(); 
    }
    ~Cow()
    {
      std::cout<<"- Krowa "<<name()<<" wraca do obory\n";
    }
};

class Horse:public Animal{
  public:
    Horse(const std::string name):Animal(name){};
    void print()const override
    {
      std::cout<<"- Krowa "<<name(); 
    }
    ~Horse()
    {
      std::cout<<"- Koń "<<name()<<" wraca do stajni\n";
    }
};