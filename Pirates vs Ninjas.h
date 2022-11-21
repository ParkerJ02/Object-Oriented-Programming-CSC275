/*
	All classes
*/
#include <string>
using namespace std;

class GameStructure {
public:
	virtual void Help();
};

class Character : public GameStructure {
public:
	Character();
	~Character();
	Character(string N, int H);

	string getName();
	void setName(string);
	int getHealth();
	void setHealth(int);
	virtual void Talk();
	void Help() override;
protected:
	string name;
	int health;
private:
};

class Ninja : public Character {
public:
	Ninja();
	Ninja(string N, int H, string NT);
	string getNinjaTalk();
	void setNinjaTalk(string);
	void Talk() override;
	void Talk(bool damage);
	void Help();
private:
	string ninjaTalk;
};

class Pirate : public Character {
public:
	Pirate();
	Pirate(string N, int H, string PT);
	string getPirateTalk();
	void setPirateTalk(string);
	void Talk() override;
	void Talk(bool damage);
	void Help();
private:
	string pirateTalk;
};
