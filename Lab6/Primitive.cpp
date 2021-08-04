#include "../include/Primitive.h"

Primitive::Primitive(double k):_x(k){}

void Primitive::PrintWithValue()const
{
    print(); //odnosi się do sumy
    std::cout<<" = "<<GetValue()<<std::endl;
}

double Primitive::GetValue()const
{
  return _x;
}

void Primitive::print() const
{
    std::cout<<_x;
}

double Primitive::getx()const
{
  return _x;
}

void Primitive::Set(double val)
{
  _x=val;
}