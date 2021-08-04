#include "../include/File.h"

File::File(const char *name):FileSystemObject(name){}

void File::print(std::ostream &str,const int tab)const
{
  FileSystemObject::print(str,tab);
  str<<" (FILE)\n";
}
