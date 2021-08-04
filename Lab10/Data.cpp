#include "../include/Data.h"

Data::Data(const char *day,std::vector<double>t):_day(day),_n(t){}

void Data::print()const
{
  std::cout<<_day<<":\t";
  std::for_each(_n.begin(),_n.end(),[](double n){std::cout<<std::setw(6)<<n;});
  std::cout<<std::endl;
}

const std::vector<double>& Data::getWek() const
{
	return _n;
}
