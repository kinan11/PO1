#pragma once
#include "Data.h"
#include <vector>
#include <functional>

class Table{
  public:
    Table()=default;
    void operator+=(Data d);
    unsigned minRow;
    void print()const;
    Table sort(unsigned c);
    Table sortBy(std::function<bool(const Data& a, const Data& b)> c);
  private:
    std::vector<Data>_dni;
};