#pragma once
#include "Data.h"

class Sum{
  public:
    Sum(double liczba=0);
    double value()const;
    void operator()(const int n);
  private:
    double _suma;
};

Sum sumData(const Data &d);