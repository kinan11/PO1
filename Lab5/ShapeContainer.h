#pragma once
#include <iostream>
#include <vector>
#include "Shape2D.h"


class ShapeContainer{
  public:

    void operator+=(Shape2D *f);
    int GetSize()const;
    Shape2D *operator[](int i)const;

  private:
    std::vector<Shape2D*> _f;

};

std::ostream &operator<<(std::ostream &str,const ShapeContainer &c);