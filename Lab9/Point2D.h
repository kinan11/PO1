#pragma once

class Point2D{
  public:
    Point2D(int x,int y);
    bool operator<(const Point2D& other) const;
    void Print()const;
    double Distance()const;
    int GetX()const;
    int GetY()const;
    static void PrintPoint(const Point2D point);
    static void FunctionPrintY(const Point2D& point);
  private:
    int _x;
    int _y;
};

class OrderAscX{
  public:
    bool operator()(const Point2D& first,const Point2D& second);
};

class OrderDescY{
  public:
    bool operator()(const Point2D& first,const Point2D& second);
};

bool MaxDistanceAsc(const Point2D& first,const Point2D& second);

void FunctionPrintX(const Point2D& point);

