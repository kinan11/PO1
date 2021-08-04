#pragma once

#include "Funkcje.h"

#include <functional>
#include <vector>

class ZlozenieFunkcji{
  public:
    void insert(std::function<double(double)> function);
    double wynik(const double x);
    double operator[](const int n);

  private:
    std::vector<std::function<double(double)>> _f;// = std::vector<std::function<double(double)>>();
    std::vector<double> _results;// = std::vector<double>();

};