#include "Image.h"
class Converter{
public:
	static Image toGRAY(const Image& im){
		Image im_gr(im.width, im.height);
		for(auto p:im.pixels)
		{
			unsigned char md=(p.getColor().R+p.getColor().G+p.getColor().B)/3;
			Color md (md,md,md,p.getColor().A)
			im_gr.setPixel(md,p.getX(), p.getY());
		}
		return im_gr
	}
	
}
