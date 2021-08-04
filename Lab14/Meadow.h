#pragma once
#include "Animals.h"
#include <memory>
#include <vector>
#include <map>

class Meadow{
  public:
    void add(std::unique_ptr<Animal> animal)
    {
      _v.push_back(std::move(animal));
    }
    void print(std::string nazwa)const
    {
      std::cout<<"=== "<<nazwa<<" ==="<<std::endl;
      for(auto &i:_v)
      {
        i->print();
        std::cout<<std::endl;
      }
    }

    void countNames()
    {
      std::map<std::string,int> lista;
      for(auto &i:_v)
      {
        lista[i->name()]++;
      }
      for(auto &i:lista)
      {
        std::cout<<i.first<<": "<<i.second<<std::endl;
      }
    }

    std::vector<Sheep*> getSheepHerd()
    {
      std::vector<Sheep*> owca;
      for(auto&i:_v)
      {
        if(dynamic_cast<Sheep*>(i.get())) owca.push_back(dynamic_cast<Sheep*>(i.get()));
      }
      return owca;
  }

  private:
    std::vector<std::unique_ptr<Animal>> _v;
};