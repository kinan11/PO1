#pragma once
#include <cmath>

class Sinus{
  public:
    Sinus(const double a,const double b):_a(a),_b(b){};
    double operator()(const double x)const;
  private:
    double _a;
    double _b;
};

class PierwiastekKwadratowy{
  public:
    double operator()(const double x)const;
};

class Liniowa{
  public:
    Liniowa(const double a,const double b):_a(a),_b(b){};
    double operator()(const double x)const;
  private:
    double _a;
    double _b;
};



















/*class Sinus
{
public:
	Sinus(double a, double b);
	double operator()(double x) const;

private:
	double _a;
	double _b;
};


class PierwiastekKwadratowy
{
public:
	double operator()(double x) const;
};


class Liniowa
{
public:
	Liniowa(double a, double b);
	double operator()(double x) const;

private:
	double _a;
	double _b;
};*/