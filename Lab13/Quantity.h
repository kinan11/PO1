#pragma once
#include <iostream>


class Base{
  public:
    Base(const char *name):_name(name){};
    virtual void Print() const = 0;
    virtual ~Base(){}
  protected:
    const char *_name;

};

template<typename T>
class Quantity:public Base{
  public:
    Quantity(const char *name,T val):Base(name),_v(val){};
    void Print()const
    {
      std::cout<<_name<<": "<<_v<<"\n";
    }

    void SetValue(T v)
    {
      _v=v;
    }

  protected:
    T _v;
};

typedef Quantity<double>QuantityDouble;
typedef Quantity<float>QuantityFloat;
typedef Quantity<int>QuantityInt;
typedef Quantity<char>QuantityChar;
typedef Quantity<bool>QuantityBool;


template <typename T>
class QuantityWithUnits : public Quantity<T>
{
public:
  QuantityWithUnits (const char * name, T value, const char * unit) : Quantity<T>(name, value), m_unit(unit) {}

  void Print () const {std::cout<<Quantity<T>::_name<<": "<<Quantity<T>::_v<<" ["<<m_unit<<"]\n";} 
  
protected:
  const char * m_unit;
};

class ArrayOfQuantities{
  public:
    ArrayOfQuantities(int n):_max(n),_array(new Base *[_max]),_liczba(0){}

    template <typename T>Quantity<T>* CreateAndAdd (const char *name, T v)
    {
      Quantity<T>* nowy = new Quantity<T> (name, v);
      _array[_liczba++] = nowy;
    return nowy;
    }

    void Print()const
    {
      for (int i = 0; i <_liczba; i++)
        _array[i]->Print();
    }

    ~ArrayOfQuantities()
    {
      for (int i = 0; i < _liczba; ++i)
        delete _array[i];
      delete [] _array;
    }

  private:
    int _max;
    Base **_array;
    int _liczba;
};

