#pragma once
#include "FileSystemObject.hpp"

class File:public FileSystemObject{
  public:
    File(const char *name);
    void print(std::ostream &str,const int tab)const override;
  private:
  
};