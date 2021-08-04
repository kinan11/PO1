#include "../include/GameObj.h"

GameObj::GameObj(const char * id): _id(id) {}

Character::Character(HP hp, const char *name, const char * id): GameObj(id),_name(name),_hp(hp) {}

Hurting::Hurting(HP hp, const char* id): GameObj(id), _hp(hp) {}

Player::Player(HP hp, const char * name, const char * id): GameObj(id), Character(hp, name, id) {}

Bomb::Bomb(HP hp, const char * id): GameObj(id),Hurting(hp, id) {}

Boss::Boss(HP hp, const char* name, HP hurtingHP, const char *id):GameObj(id),Character(hp, name, id), Hurting(hurtingHP, id) {}

std::ostream& operator<<(std::ostream &str, const GameObj &o)
{
  o.print(str);
  return str;
}

const char *GameObj::id()const
{
  return _id;
}

int HP::getHP()const
{
  return _hp;
}

void GameObj::print(std::ostream &str)const
{
  str<<"Info o obiekcie: ";
}

void Character::print(std::ostream &str)const
{
  str<<_name<<", ma: ["<<_hp.getHP()<<" HP]";
}

void Player::print(std::ostream &str)const
{
  str<<"Player "<<static_cast<Character>(*this);
}

void Hurting::print(std::ostream &str)const
{
  str<<"Jego uderzenie odbiera: ["<<_hp.getHP()<<" HP]";
}

void Boss::print(std::ostream &str)const
{
  str<<"Bad guy: "<<static_cast<Character>(*this)<<std::endl<<static_cast<Hurting>(*this);
}

std::string Hurting::hp()const
{
  return "["+std::to_string(_hp.getHP())+" HP]";
}

std::string Character::hp()const
{  
  return "["+std::to_string(_hp.getHP())+" HP]";
}