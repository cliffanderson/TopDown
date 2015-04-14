#ifndef _ENTITY_H
#define _ENTITY_H
#include <string>
using namespace std;

class Entity
{
public:
	Entity() {}
	Entity(double x, double y, string name, double speed){
		this->x = x;
		this->y = y;
		this->name = name;
		this->speed = speed;
		rotation=0;
	}

	string getPath()
	{
		return path;
	}
	string getName() {
		return name;
	}

	double getX()
	{
		return x;
	}

	double getY()
	{
		return y;
	}

	double getRotation()
	{
		return rotation;
	}

	void setX(double x)
	{
		this->x=x;
	}

	void setY(double y)
	{
		this->y=y;
	}

	void setRotation(double r)
	{
		rotation=r;
	}


	bool death()
	{
		return dead;
	}

	void setImageOffset(int xOff,int yOff)
	{
		imageXOffset=xOff;
		imageYOffset=yOff;
	}

	//1 for forward, -1 for backwards
	virtual void move(int direction){}

protected:
	//x and y on the screen
	double x, y,rotation,imageXOffset,imageYOffset, speed;
	string path,name;
	bool dead;

};
#endif
