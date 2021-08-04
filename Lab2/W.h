#pragma once

class W{
  public:
    explicit W(int n);
    W(const W &w);
    ~W();
    double &at(const int n)const;
    void print(const char *napis)const;
    static double dot(const W &a,const W &b);
    operator double() const;
    void operator+=(const W &w);
    W operator+=(const double n);
    double norm()const;
    

  private:
    int _size;
    double *_v;

};