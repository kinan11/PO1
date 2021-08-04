#include "../include/Vertex.h"
#include <cmath>

const int Vertex::GetX()const
{
  return _x;
}

const int Vertex::GetY()const
{
  return _y;
}

std::ostream& operator<<(std::ostream& str,const Vertex &w)
{
  return str<<" ["<<w.GetX()<<", "<<w.GetY()<<"]";;
}

int Vertex::Size(const Vertex& other) const
{
	return sqrt((_x - other._x) * (_x - other._x) + (_y - other._y) * (_y - other._y));
}