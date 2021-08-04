#include "../include/Dir.h"
#include <iostream>

Dir::Dir(const char *name):FileSystemObject(name){}

void Dir::operator+=(FileSystemObject *object)
{
  _object.push_back(object);
}

void Dir::print(std::ostream &str,const int tab)const
{
  FileSystemObject::print(str,tab);
  str<<" (DIR)\n";
  for(FileSystemObject* object : _object)
  {
		object->print(str,tab+1);
	}
}


Dir* Dir::findDir(const char* name)
{
  for(FileSystemObject* object : _object)
  {
    if(object->getName()==name)
    {
      return dynamic_cast<Dir*>(object);
    }
    if(dynamic_cast<Dir*>(object))
		{
      Dir* result = dynamic_cast<Dir*>(object)->findDir(name);
      if(result != nullptr) return result;
    }

  }
  return nullptr;
}

void Dir::add(FileSystemObject *dir)
{
  *this+=dir;
}

FileSystemObject* Dir::get(const char * name)
{
  for(FileSystemObject* object : _object)
  {
    if(object->getName()==name)
    {
      return object;
    }
		if(dynamic_cast<Dir*>(object))
		{
			FileSystemObject* result = dynamic_cast<Dir*>(object)->get(name);
			if(result != nullptr) return result;
		}
  }
  return nullptr;
}

Dir::~Dir()
{
  std::cout<<"Deleting Dir: "<<getName()<<std::endl;
  for(FileSystemObject* object : _object)
	{
		std::cout<<"About to delete "<<object->getName()<<std::endl;
		delete object;
	}

	_object.clear();
}