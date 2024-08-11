#include<iostream>
using namespace std;
class employee
{
    protected:
    string name;
    int age;
    double salary;
    public:
    void getdata()
    {
        cout<<"enter name  ";
        getline(cin,name);
        cout<<"enter age: ";
        cin>>age;
        cout<<"enter salary: ";
        cin>>salary;
    }
};

class manager:public employee
{
    string department_name,department_location;
    public:
    void getinfo()
    {
        cout<<"enter department name ";
        cin>>department_name;
        cout<<"enter department location ";
        cin>>department_location;
    }
    void putinfo()
    {
        cout<<endl<<"Your details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"department name: "<<department_name<<endl;
        cout<<"department location: "<<department_location<<endl;

    }
};
int main()
{
    manager m;
    m.getdata();
    m.getinfo();
    m.putinfo();
    return 0;
}
