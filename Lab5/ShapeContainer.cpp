#include "../include/ShapeContainer.h"

void ShapeContainer::operator+=(Shape2D *f)
{
  _f.push_back(f);
}

int ShapeContainer::GetSize()const
{
  return _f.size();
}

Shape2D *ShapeContainer::operator[](int i)const
{
  return _f[i];
}

std::ostream &operator<<(std::ostream &str,const ShapeContainer &c)
{
  for(int i=0;i<c.GetSize();i++)
  {
    str<<*c[i];
  }
  return str;
}