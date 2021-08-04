#include "../include/ZlozenieFunkcji.h"

void ZlozenieFunkcji::insert(std::function<double(double)> function)
{
	_f.push_back(function);
}

double ZlozenieFunkcji::wynik(const double x)
{
	_results.clear();
	_results.push_back(_f[0](x));	
	for(unsigned i = 1; i < _f.size(); i++)
	{
		_results.push_back(_f[i](_results[i - 1]));
  }
  return _results[_results.size() - 1];
}
	
double ZlozenieFunkcji::operator[](const int n)
{
	return _results[n];
}






















/*void ZlozenieFunkcji::insert(std::function<double(double)> function)
{
	_functions.push_back(function);
}

double ZlozenieFunkcji::wynik(double x)
{
	_results.clear();
	_results.push_back(_functions[0](x));	
	for(unsigned a = 1; a < _functions.size(); a++)
	{
		_results.push_back(_functions[a](_results[a - 1]));
	}
	return _results[_results.size() - 1];
}

double ZlozenieFunkcji::operator[](unsigned index)
{
	return _results[index];
}*/