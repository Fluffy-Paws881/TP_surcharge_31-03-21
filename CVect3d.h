#pragma once
#include "CVect2d.h"
#include <iostream>

using namespace std;

class CVect3d : public CVect2d {
	float z;

public:

	//constructeur
	CVect3d();
	CVect3d(const CVect3d &v);
	CVect3d(const float  flt_x, const float  flt_y, const float  flt_z);


	CVect3d operator =(const CVect3d &v);
	CVect3d operator +(const CVect3d &v);
	CVect3d operator *(const CVect3d &v);
	CVect3d operator /(const CVect3d &v);
	CVect3d operator -(const CVect3d &v);

	friend bool coincide3D(CVect3d const& vect1, CVect3d const& vect2);

	void affiche3d()const;

	friend ostream& operator <<(ostream& os, const CVect3d& vect)
	{
		
			os << "X : " << vect.getX() << ", Y : " << vect.getY() << ", Z : " << vect.z << endl;
			return os;
		
	}
	
};

