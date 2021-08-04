#include "../include/Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const char *name) : Shape2D(name)
{
	std::cout<<"Mowiac scisle, jeste prostokatem."<<std::endl;
}

float Rectangle::area()const
{
  return _w[0].Size(_w[1]) * _w[0].Size(_w[3]);
}