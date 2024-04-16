#include<iostream>
using namespace std;

class complex{
    float x,y;
public:
    void getdata(){
        cout<<"Enter the real part:";
        cin>>x;
        cout<<"Enter the imaginary part:";
        cin>>y;
    }
    void putdata(){
        if(y<0){
         cout<<x<<y<<"i"<<endl;
        }
        else{
        cout<<x<<"+"<<y<<"i"<<endl;
        }
    }
    complex operator+ (complex &w){
        complex tem;
        tem.x=x+w.x;
        tem.y=y+w.y;
        return tem;
    }
    complex operator- (complex &w){
        complex tem;
        tem.x=x-w.x;
        tem.y=y-w.y;
        return tem;
    }
    complex operator! (){
        complex tem;
        tem.x=-x;
        tem.y=-y;
        return tem;
    }
    friend complex operator*(complex &,complex&);
    friend complex operator/(complex &,complex&);
    

};
 complex operator*(complex &a,complex &b){
    complex tem1;
    tem1.x=(a.x*b.x)-(a.y*b.y);
    tem1.y=(a.x*b.y)+(b.x*a.y);
    return tem1;
 } 
 complex operator/ (complex &a,complex &b){
    complex tem1;
    tem1.x=((a.x*b.x)+(a.y*b.y))/((b.x*b.x)+(b.y*b.y));
    tem1.y=((a.y*b.x)-(a.x*b.y))/((b.x*b.x)+(b.y*b.y));
    return tem1;
 }

int main(){
    complex a,b,c,d;
    char v;
    b.getdata();
    c.getdata();
    cout<<"choose operation:"<<endl;
    cout<<" (+) Addition"<<endl;
    cout<<" (-) subtraction"<<endl;
    cout<<" (*) multiplication"<<endl;
    cout<<" (/) Division "<<endl;
    cout<<" (!) negation"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>v;
    switch(v){
        case '+':
            a=b+c;
            a.putdata();
            break;

        case '-':
            a=b-c;
             a.putdata();
            break;

        case '*':
            a=b*c;
             a.putdata();
            break;

        case '/':
            a=b/c;
             a.putdata();
            break;

        case '!':
            a=!b;
            d=!c;
             a.putdata();
             d.putdata();
            break;
    }

} 


