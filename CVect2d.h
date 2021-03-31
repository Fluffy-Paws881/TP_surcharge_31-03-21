#pragma once

class CVect2d {
	
	float x, y;

public:

	//constructeur
	CVect2d();
	CVect2d(CVect2d const& vect);
	CVect2d(float const flt_x, float const flt_y);

	//accesseur
	float getX();
	float gety();

	//mutateurs
	void setX(float const flt_x);
	void setY(float const flt_y);

	void soustVect(CVect2d const& vect);
	void addVect(CVect2d const& vect);
	void multVect(CVect2d const& vect);

	friend bool coincide2D(CVect2d const& vect1, CVect2d const& vect2);

	void affiche();
};