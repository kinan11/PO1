#include "../include/Sum.h"

Sum::Sum(double liczba):_suma(liczba){}

Sum sumData(const Data &d)
{
  double s=0;
  std::for_each(d.getWek().begin(),d.getWek().end(),[&s](double n){s+=n;});
  return Sum(s);
}

double Sum::value()const
{
  return _suma;
}

void Sum::operator()(const int n)
{
  _suma+=n;
}