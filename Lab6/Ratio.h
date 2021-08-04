#pragma once
#include "Primitive.h"
class Ratio:public Primitive{
  public:
    Ratio(Primitive &a,Primitive &b);
    void print()const override;
    double GetValue()const override;

  private:
    Primitive &_p1;
    Primitive &_p2;
};