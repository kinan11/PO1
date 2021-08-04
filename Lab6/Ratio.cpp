#include "../include/Ratio.h"

Ratio::Ratio(Primitive &a,Primitive &b):_p1(a),_p2(b){}

double Ratio::GetValue()const
{
  return _p1.GetValue()/_p2.GetValue();
}

void Ratio::print()const
{
  std::cout<<"(";
  _p1.print();
  std::cout<<"/";
  _p2.print();
  std::cout<<")";
}