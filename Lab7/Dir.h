#pragma once
#include "FileSystemObject.hpp"
#include <vector>

class Dir:public FileSystemObject{
  public:
    Dir(const char *name);
    void operator+=(FileSystemObject *object);
    void print(std::ostream &str,const int tab)const override;
    Dir* findDir(const char* name);
    void add(FileSystemObject*dir);
    FileSystemObject* get(const char * name);
    ~Dir();
  private:
    std::vector<FileSystemObject *>_object;
};
