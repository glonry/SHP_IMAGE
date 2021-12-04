#include "Image.h"

class Converter{
public:
	static Image toGRAY(const Image& im){
		Image im_gr(im.width, im.height);
		for(auto p:im.pixels)
		{
			unsigned char md=(p.getColor().R+p.getColor().G+p.getColor().B)/3;
			Color gr(md,md,md,p.getColor().A);
			im_gr.setPixel(gr,p.getX(), p.getY());
		}
		return im_gr;
	}
	
}

