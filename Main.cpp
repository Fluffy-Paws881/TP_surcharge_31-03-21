#include <string.h>
#include <iostream> 
#include "CVect2d.h"
#include "CVect3d.h"

int main() {

	CVect2d p1(5, 6);
	CVect2d p2;
	CVect2d p3(p1);
	CVect3d p4;
	CVect3d p5(4,5,6);

	p4 = p5 * p5;

	p4.affiche3d();
	

<<<<<<< Updated upstream
	p1.affiche();
=======
	
>>>>>>> Stashed changes

	p1.addVect(p1);
	p2.soustVect(p3);


	

};