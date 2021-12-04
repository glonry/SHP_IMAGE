#include "Image.h"
typedef unsigned int uint;
class Converter{
public:
	static Image toGRAY(const Image& im){
		Image im_gr(im.width, im.height);
		for(auto p:im.pixels)
		{
			auto c=p.getColor();
			unsigned char md=(c.R+uint(c.G)+uint(c.B))/3;
			Color gr(md,md,md,c.A);
			im_gr.setPixel(gr,p.getX(), p.getY());
		}
		return im_gr;
	}
	
}

