#include <iostream>
#include <cmath>
#include "../include/W.h"

W::W(int n)
{
  _size=n;
  _v= new double[n];
  for(int i=0;i<n;i++)
  {
    _v[i]=0;
  }
}

W::W(const W &w):_size(w._size)
{
  _v=new double[_size];
  for(int i=0;i<_size;i++)
  {
    _v[i]=w._v[i];
  }
}

double &W::at(const int n)const
{
  return _v[n];
}

void W::print(const char*napis)const
{
  std::cout<<napis<<"[";
  for(int i=0;i<_size-1;i++)
  {
    std::cout<<_v[i]<<", ";
  }
  std::cout<<_v[_size-1]<<"]"<<std::endl;
}

double W::dot(const W &a, const W &b)
{
  double d=0;
  if(a._size!=b._size)
  {
    std::cout<<"Error, vectors of different dimensions!"<<std::endl;
    return 0;
  }
  for(int i=0;i<a._size;i++)
  {
    d+=a._v[i]*b._v[i];
  }
  return d;
}
W::operator double()const
{
  return norm();
}

double W::norm()const
{
  double n=0;
  for(int i=0;i<_size;i++)
  {
    n+=_v[i]*_v[i];
  }
  return sqrt(n);
}

void W::operator+=(const W &w)
{
  for(int i=0;i<_size;i++)
  {
    _v[i]+=w._v[i];
  }
}

W W::operator+=(const double n)
{
  for(int i=0;i<_size;i++)
  {
    _v[i]+=n;
  }
  return *this;
}

W::~W()
{
  _size=0;
  delete  []_v;
}
