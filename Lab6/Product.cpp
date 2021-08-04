#include "../include/Product.h"
#include <iostream>

Product::Product(Primitive &a,Primitive &b):_p1(a),_p2(b){}

void Product::print()const
{
  std::cout<<"(";
  _p1.print();
  std::cout<<"*";
  _p2.print();
  std::cout<<")";
}

double Product::GetValue()const
{
  return _p1.GetValue()*_p2.GetValue();
}