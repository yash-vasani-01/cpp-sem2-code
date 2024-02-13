#include<iostream>
using namespace std;
 void area(int r){
              cout<<"The area of a circle is "<<3.14*r*r<<endl;
        }
 void  area(int h,int w){
             cout<<"The area of a rectangle is "<<h*w<<endl;
        }
  void  area(int h,int w,int d){
             cout<<"The area of a cuboid is "<<h*w*d<<endl;
        }
    
int main(){
    int  radius,height,width,c_height,c_width,c_depth;   
      cout<<"Enter the radius for circle:";
      cin>>radius;
      area(radius);
      cout<<"Enter the height of recatangle:";
      cin>>height;
      cout<<"Enter the width of recatangle:";
      cin>>width;
      area(height,width);
      cout<<"Enter the  height of cuboid:";
      cin>>c_height;
      cout<<"Enter the  width of cuboid:";
      cin>>c_width;
      cout<<"Enter the  depth of cuboid:";
      cin>>c_depth;
      area(c_height,c_width,c_depth);
}
