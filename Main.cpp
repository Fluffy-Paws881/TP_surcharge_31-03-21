#include <string.h>
#include <iostream> 
#include "CVect2d.h"

int main() {

	CVect2d p1(5, 6);
	CVect2d p2;
	CVect2d p3(p1);

	p1.affiche();

	p1.addVect(p1);
	p2.soustVect(p3);


	

};