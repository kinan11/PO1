#pragma once
#include "Vertex.h"
#include <vector>
#include <iostream>

class Shape2D{
  public:
    Shape2D(const char *name);
    Shape2D &operator +=(const Vertex w);
    Shape2D &addVertex(const Vertex w);
    const char * name()const;
    bool operator==(const Shape2D &f)const;
    const int getSize()const;
    const Vertex& getV(int a)const;

  protected:
    const char *_name;
    std::vector<Vertex> _w;

};
std::ostream& operator<<(std::ostream & str, const Shape2D &f);
