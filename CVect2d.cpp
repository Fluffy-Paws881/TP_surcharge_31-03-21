#include "CVect2d.h"
#include <string.h>
#include <iostream> 

using namespace std;

CVect2d::CVect2d()
{
	this->x = 0;
	this->y = 0;
}

CVect2d::CVect2d(const CVect2d  &vect)
{
	this->x = vect.x;
	this->y = vect.y;
}

CVect2d::CVect2d(const float flt_x, const float flt_y)
{
	this->x = flt_x;
	this->y = flt_y;
}

float CVect2d::getX()const
{
	return this->x;
}

float CVect2d::getY()const
{
	return this->y;
}

void CVect2d::setX(const float  flt_x)
{
	this->x = flt_x;
}

void CVect2d::setY(const float  flt_y)
{
	this->y = flt_y;
}

void CVect2d::soustVect(CVect2d const& vect)
{
	this->x -= vect.x;
	this->y -= vect.y;

}

void CVect2d::addVect(CVect2d const& vect)
{
	this->x += vect.x;
	this->y += vect.y;
}

void CVect2d::multVect(CVect2d const& vect)
{
	this->x *= vect.x;
	this->y *= vect.y;
}

void CVect2d::affiche()const
{
	cout << "x : " << this->x <<  " y : " << this->y << endl;
}

bool coincide2D(CVect2d const& vect1, CVect2d const& vect2)
{
	if ((vect1.x == vect2.x) && (vect1.y == vect2.y)) {
		
		return true;
	}
	return false;
}
