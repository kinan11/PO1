#pragma once
#include <iostream>
class Primitive{
  public:
    //Primitive()=default;
    Primitive (double k=0);
    virtual double GetValue()const;
    virtual void PrintWithValue()const;
    virtual void print() const;
    double getx()const;
    void Set(double val);
    virtual ~Primitive(){}
  private:
    double _x=0;  
};