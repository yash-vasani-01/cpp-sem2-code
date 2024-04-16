#include<iostream>
using namespace std;
class employee{
    int year;
    int month;
    public:
    employee(){
        year=0;
        month=0;
    }
     employee(float a){
            year=a;
            month=(a-year)*12;
        }
    void display(){
        cout<<"Employee Experince is "<<year<<" and "<<month<<" month";
    }
    
};
int main(){
    float y;
    cout<<"Enter your experince"<<endl;
    cin>>y;
    employee e1=y;
    e1.display();

}