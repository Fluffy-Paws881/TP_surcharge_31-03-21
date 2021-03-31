#pragma once

class CVect2d {
	
	float x, y;

public:

	//constructeur
	CVect2d();
	CVect2d(const CVect2d  &vect);
	CVect2d(const float  flt_x, const float  flt_y);

	//accesseur
	float getX()const;
	float getY()const;

	//mutateurs
	void setX(const float  flt_x);
	void setY(const float  flt_y);

<<<<<<< Updated upstream
	void soustVect(CVect2d const& vect);
=======
	
	/*void soustVect(CVect2d const& vect);
>>>>>>> Stashed changes
	void addVect(CVect2d const& vect);
	void multVect(CVect2d const& vect);

	friend bool coincide2D(CVect2d const& vect1, CVect2d const& vect2);

	void affiche()const;
};