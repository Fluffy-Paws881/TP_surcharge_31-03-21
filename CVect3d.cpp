#include "CVect3d.h"
#include <string.h>
#include <iostream> 

using namespace std;

CVect3d::CVect3d()
{
	this->z = 0;
}

CVect3d::CVect3d(const CVect3d &v) : CVect2d(v)
{
	this->z = v.z;
}

CVect3d::CVect3d(const float flt_x, const float flt_y, const float flt_z) : CVect2d(flt_x,flt_y)
{
	this->z = flt_z;
}

CVect3d CVect3d::operator=(const CVect3d& v)
{

	this->setX(v.getX());
	this->setY(v.getY());
	this->z = v.z;

	return *this;
}

CVect3d CVect3d::operator+(const CVect3d& v)
{
	CVect3d result;
	result.setX(this->getX() + v.getX());
	result.setY(this->getY() + v.getY());
	result.z = v.z;
	
	return result;
}

CVect3d CVect3d::operator*(const CVect3d& v)
{
		CVect3d result;
		result.setX(this->getX() * v.getX());
		result.setY(this->getY() * v.getY());
		result.z = this->z * v.z;
		return result;
	
}

CVect3d CVect3d::operator/(const CVect3d& v)
{
	CVect3d result;
	result.setX(this->getX() / v.getX());
	result.setY(this->getY() / v.getY());
	result.z = this->z / v.z;
	return result;
}

CVect3d CVect3d::operator-(const CVect3d& v)
{
	CVect3d result;
	result.setX(this->getX() - v.getX());
	result.setY(this->getY() - v.getY());
	result.z = this->z - v.z;
	return result;
}

void CVect3d::affiche3d() const
{
	CVect2d:: affiche();
	cout << "Z : " << this->z << endl;
}

bool coincide3D(CVect3d const& vect1, CVect3d const& vect2)
{
	if (vect1.getX() == vect2.getX() && vect1.getY() == vect2.getY() && vect1.z == vect2.z) {
		return true;
	}
	return false;
}



