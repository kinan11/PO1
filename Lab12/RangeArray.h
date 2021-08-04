#pragma once

template<typename T>
class RangeArray{
  public:
    RangeArray(const PairOfNumbers<int, T>& pair )
    {
      _size=pair.second-pair.first;
      _array=new T[_size];
    }

    RangeArray(const RangeArray& other): _size(other._size), _array(new T[_size])
    {
      for(unsigned a = 0; a < _size; a++)
      {
        _array[a] = other._array[a];
      }
    }

    unsigned Size()const
    {
      return _size;
    }

    T&operator[](int indx)
    {
      if (indx<0) indx=_size+indx;
      return _array[indx];
    }

    T& At(int index)
    {
      return (*this)[index];
    }

    ~RangeArray()
    {
      delete[] _array;
    }
  private:
    unsigned _size;
    T *_array;
};