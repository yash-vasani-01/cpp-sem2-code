#include <iostream>
#include<iomanip>
using namespace std;

class employee
{
 private:
    int id;
    string name;
    string qucalification;
    float experince;
    long long int con_number;
    static float avg_experince ;
    static int count;
 public:
    int get_id(){
        return id;
    }
    void getdetail()
    {
        // cout<<"Enter the Employee Detail"<<endl;
        fflush(stdin);
        cout << "Enter the Employee ID:";
        cin >> id;
        cout << "Enter Empoyee Name:";
        getchar();
        getline(cin, name); 
        cout << "Enter the Qucalification:";
        getline(cin, qucalification);
       // fflush(stdin);
        cout << "Enter Experince:";
        cin >> experince;
       // fflush(stdin);
        cout << "Enter the Contact Number:";
        cin >> con_number;
        avg_experince+=experince;
        count++;
        fflush(stdin);
    }
    
    void display() const
    {
        cout.width(20);
        cout<<left<<"Employee ID"<<":"<< id << endl;
        cout.width(20);
        cout<<left<<"Employee Name"<<":"<< name<<endl;
        cout.width(20);
        cout<<left<<"Qucalification"<<":"<<qucalification << endl;
        cout.width(20);
        cout<<left <<"Experince"<<":"<< experince << endl;
        cout.width(20);
        cout<<left<<"Contact Number"<<":"<< con_number<<endl;
    }
      static void  experince_f(){
            cout<<"Average Experince of employee "<<avg_experince/count<<" years"<<endl;
    }
}e;
    float employee :: avg_experince;
    int employee :: count;
int main()
{
    int n,i;

    cout << "Enter the number of Employee:";
    cin >> n;
    employee e[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Detail for "<<i+1<<" Employee"<<endl;
        e[i].getdetail();
    }
    char ch;
    int emp_id;
    do
    {
        cout << "Enter Employee id which you check:"<<endl;
        cin >> emp_id;
        for (  i = 0; i < n; i++)
        {
            
            if (emp_id == e[i].get_id())
            {
                
                e[i].display();
                break;
            }
        }
             if(i==n)
            {
                cout << "ERROR:ENTERED EMPLOYEE ID DOSE NOT EXIST"<<endl;
                
            }
        cout<<"Press Y for another Employee detail:";
        cin>>ch;


    }while(ch=='Y'||ch=='y');
    employee::experince_f();
}