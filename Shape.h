#incude "Pixel.h"
public class Shape{
private:
  vector <Pixel> v;
public:
  Shape() {}
  Shape(const Shape& shp) v(shp.v.begin(),shp.v.end()) {}
  Shape(vector <Pixel> v) v(v.begin(),v.end()) {}
  
  void translate (int tx, int ty)
  {
    for(auto& i:v) i.setPos(i.getX()+tx,i.getY()+ty);
  }
  void setColor(Color color)
  {
    for(auto& i:v) i.setColor(color);
  }
  static Shape getTriangle(size_t size,Color color){
    vector<Pixel> pixels;
    Pixel pixel (color,Point({0,0}));
    pixel.push_back(pixel);
    for(int i=1;i<size;i++)
  }
