#include "../include/Shape2D.h"

Shape2D::Shape2D(const char *name):_name(name)
{
  std::cout<<"Jestem nowa figura "<<_name<<std::endl;
}

Shape2D &Shape2D::operator +=(const Vertex w)
{
  _w.push_back(w);
  return *this;
}

Shape2D &Shape2D::addVertex(const Vertex w)
{
  return *this+=w;
}

const char * Shape2D::name()const
{
  return _name;
}

bool Shape2D::operator==(const Shape2D &f)const
{
  if (_w.size()==f._w.size())
  {
    for(unsigned i=0;i<_w.size();i++)
    {
      if(_w[i].GetX() !=f._w[i].GetY()&&_w[i].GetY() !=f._w[i].GetY())
      {
        return false;
      }
    }
    return true;
  }else return false;
}

const int Shape2D::getSize()const
{
  return _w.size();
}

const Vertex& Shape2D::getV(int a)const
{
  return _w[a];
}

std::ostream& operator<<(std::ostream & str, const Shape2D &f)
{
  str<<"Figura "<<f.name()<<std::endl;
	for(int i= 0; i < f.getSize(); i++)
	{
		str<<f.getV(i);
	}
	return str<<std::endl;
}
