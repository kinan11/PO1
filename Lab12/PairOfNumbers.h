#pragma once 

template<typename T1, typename T2>
class PairOfNumbers{
  public:
    PairOfNumbers(T1 &f, T2 &s):first(f),second(s){}
    T1 &first;
    T2 &second;

    PairOfNumbers<T2,T1> Swapped()const
    {
      return PairOfNumbers<T2, T1>(second, first);
    }

    void Print()const
    {
      std::cout<<"Print method: "<<first<<" "<<second<<std::endl;
    }
    void Add(T1 n)
    {
      first+=n;
      second+=n;
    }
    void Scale(T1 n)
    {
      first*=n;
      second*=n;
    }

    void Info()
    {
      std::cout<<"This is NON-const pair of numbers"<<std::endl;
    }

    void Info()const
    {
      std::cout<<"This is const pair of numbers"<<std::endl;
    }
};

