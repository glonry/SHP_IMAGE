
#include <iostream>
#include <cassert>
#include "Pixel.h"
using namespace std;
int main(){
	Pixel pix;
		assert(pix.getColor().R==0);
		assert(pix.getColor().G==0);
		assert(pix.getColor().B==0);
		assert(pix.getColor().A==0);
		assert(pix.getX()==0);
		assert(pix.getY()==0);

	pix.setColor(0xff2233); 
	pix.setPos(67,99);
		assert(pix.getColor().R==0xff);
		assert(pix.getColor().G==0x22);
		assert(pix.getColor().B==0x33);
		assert(pix.getColor().A==255);
		assert(pix.getX()==67);
		assert(pix.getY()==99);

	Color color(44, 81, 14 ,89);
	Point point(62,101);
	Pixel pix1(color,point);
		assert(pix1.getColor().R==44);
		assert(pix1.getColor().G==81);
		assert(pix1.getColor().B==14);
		assert(pix1.getColor().A==89);
		assert(pix1.getX()==62);
		assert(pix1.getY()==101);

	Pixel pix2(pix); 
		assert(pix.getColor().R==0xff);
		assert(pix.getColor().G==0x22);
		assert(pix.getColor().B==0x33);
		assert(pix.getColor().A==255);
		assert(pix.getX()==67);
		assert(pix.getY()==99);
	
	cout<<"Tests complete!"<<endl;
}