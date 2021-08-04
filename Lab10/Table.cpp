#include "../include/Table.h"
#include <vector>

void Table::operator+=(Data d)
{
  _dni.push_back(d);
  if(_dni.size()==1)
  {
    minRow=d.getWek().size();
  }else{
    if(d.getWek().size()<minRow) minRow=d.getWek().size();
  } 
}

void Table::print()const
{
  std::for_each(_dni.begin(),_dni.end(),[](Data n){n.print();});
  std::cout<<std::endl;
}

Table Table::sort(unsigned c)
{
  if((c+1)>minRow)
  {
    std::cout<<"Indeks "<<c<<" nieprawidlowy!"<<std::endl;
    return *this;
  }
  std::sort(_dni.begin(),_dni.end(),[c](Data first,Data second){return first.getWek()[c]<second.getWek()[c];});
  return *this;
}

Table Table::sortBy(std::function<bool(const Data& a, const Data& b)> c)
{
  std::sort(_dni.begin(), _dni.end(), c);
	return *this;
}