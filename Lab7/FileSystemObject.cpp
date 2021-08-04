#include "../include/FileSystemObject.hpp"

FileSystemObject::FileSystemObject(const char * name):_name(name){}

void FileSystemObject::print(std::ostream &str,const int tab)const
{
  for(int i=0;i<tab;i++)
  {
    str<<"  ";
  }
  str<<_name;
}

std::ostream& operator<<(std::ostream& str, const FileSystemObject& object)
{
  object.print(str,0);
  return str;
}

const char *FileSystemObject::getName()const
{
  return _name;
}