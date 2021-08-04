#include "../include/Point2D.h"
#include <cmath>
#include <iostream>

Point2D::Point2D(int x,int y):_x(x),_y(y){}
double Point2D::Distance()const
{
  return sqrt(_x * _x + _y * _y);
}

bool Point2D::operator<(const Point2D& other) const
{
  return Distance()<other.Distance();
}

void Point2D::Print()const
{
  std::cout<<"Point coordinates ("<<_x<<", "<<_y<<") distance from origin: "<<Distance()<<std::endl;
}

int Point2D::GetX()const
{
  return _x;
}

int Point2D::GetY()const
{
  return _y;
}


void Point2D::PrintPoint(const Point2D point)
{
  point.Print();
}

void Point2D::FunctionPrintY(const Point2D& point)
{
  std::cout<<"Function print y="<<point.GetY()<<std::endl;
}

bool OrderAscX::operator()(const Point2D& first,const Point2D& second)
{
  return first.GetX()<second.GetX();
}

bool OrderDescY::operator()(const Point2D& first,const Point2D& second)
{
   return first.GetY()>second.GetY();
}

bool MaxDistanceAsc(const Point2D& first,const Point2D& second)
{ 
  return first.GetX()>first.GetY()?first.GetX()<(second.GetX()>second.GetY()?second.GetX():second.GetY()):first.GetY()<(second.GetX()>second.GetY()?second.GetX():second.GetY());
}

void FunctionPrintX(const Point2D& point)
{
  std::cout<<"Function print x="<<point.GetX()<<std::endl;
}