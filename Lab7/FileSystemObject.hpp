#pragma once
#include <iostream>

class FileSystemObject{
  public:
    FileSystemObject(const char *name);
    virtual void print(std::ostream &str,const int tab)const;
    const char *getName()const;
    virtual ~FileSystemObject() {};

  protected:
    const char * _name;

};

std::ostream& operator<<(std::ostream& str, const FileSystemObject& object);