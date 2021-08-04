#include "../include/Funkcje.h"

double Sinus::operator()(const double x)const
{
  return sin(_a*x+_b);
}

double PierwiastekKwadratowy::operator()(const double x)const
{
  return sqrt(x);
}

double Liniowa::operator()(const double x)const
{
  return _a*x+_b;
}

























/*Sinus::Sinus(double a, double b): _a(a), _b(b) {}

double Sinus::operator()(double x) const
{
	return sin(_a * x + _b);
}

double PierwiastekKwadratowy::operator()(double x) const
{
	return sqrt(x);
}

Liniowa::Liniowa(double a, double b): _a(a), _b(b) {}

double Liniowa::operator()(double x) const
{
	return _a * x + _b;
}*/