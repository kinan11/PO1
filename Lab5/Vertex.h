#pragma once
#include <iostream>

class Vertex{
  public:
    Vertex(const int x, const int y):_x(x),_y(y){};
    const int GetX()const;
    const int GetY()const;
    int Size(const Vertex& other) const;
  
  private:
    const int _x;
    const int _y;

};

std::ostream& operator<<(std::ostream& str,const Vertex &w);