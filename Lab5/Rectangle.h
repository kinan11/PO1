#pragma once
#include "Shape2D.h"

class Rectangle : public Shape2D{
  public:
    Rectangle(const char *name);
    float area()const;
};