#pragma once
#include "Primitive.h"
class Product:public Primitive{
  public:
    Product(Primitive &a,Primitive &b);
    void print()const override;
    double GetValue()const override;
  private:
    Primitive &_p1;
    Primitive &_p2;
};