#pragma once
#include <iostream>
#include <string>

class GameObj{
  public:
    GameObj(const char * id);
    const char *id()const;
    virtual void print(std::ostream &str)const;
    virtual ~GameObj()=default;
  protected:
    const char *_id;
};

std::ostream& operator<<(std::ostream &str, const GameObj &o);

class HP{
  public:
    HP(int hp):_hp(hp){}
    int getHP()const;
  private:
    int _hp;
};

class Character:public virtual GameObj{
  public:
    Character(HP hp,const char *name,const char *id);
    void print(std::ostream &str)const override;
    std::string hp()const;
  protected:
    const char *_name;
    HP _hp;
};

class Player:public Character{
  public:
    Player(HP hp,const char *name,const char *id);
    void print(std::ostream &str)const override;
};

class Hurting:public virtual GameObj{
  public:
    Hurting(HP hp, const char *id);
    void print(std::ostream &str)const override;
    std::string hp()const;
  protected:
    HP _hp;
};

class Boss : public Character, public Hurting
{
  public:
    Boss(HP hp, const char * name, HP hurtingHP, const char * id);
    void print(std::ostream& stream) const override;
};

class Bomb:public Hurting{
  public:
    Bomb(HP hp,const char *id);
};