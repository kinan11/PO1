#include "../include/Sum.h"
#include <iostream>

Sum::Sum(Primitive &a,Primitive &b):_p1(a),_p2(b){}

void Sum::print()const 
{
  std::cout<<"(";
  _p1.print(); //jesli bedzie tu trzeba wyprintowac np ratio - to funkcja override przyćmi printa z primitiva
  std::cout<<"+";
  _p2.print();
  std::cout<<")";
}

double Sum::GetValue()const
{
  return _p1.GetValue()+_p2.GetValue();
}