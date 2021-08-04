#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

class Data{
  public:
    Data(const char *day,std::vector<double>t);
    void print()const;
    const std::vector<double>&getWek()const;
  private:
    const char *_day;
    std::vector<double>_n;
};
