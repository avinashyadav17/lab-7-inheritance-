#include<iostream>
using namespace std;
class student
{
    protected:
    string name,college;
    public:
    void getdata(){
    cout<<"enter name of student: ";
    getline(cin,name);
    cout<<"enter name of college: ";
    getline(cin,college);
    }
    };
    class teacher{
        protected:
        string name,college;
        public:
        void getdata()
        {
            cout<<"enter name of teacher: ";
            getline(cin,name);
            cout<<"enter name of college: ";
           getline(cin,college);
        }
    };
    class teaching_assistant:public student,public teacher
    {
        string name,college;
        public:
        void getdata()
        {
            cout<<"enter name of teaching assistant: ";
            getline(cin,name);
            cout<<"enter name of college: ";
            getline(cin,college);
        }
        void putdata()
        {
            cout<<"name and college of student: "<<student::name<<" and "<<student::college<<endl;
            cout<<"name and college of teacher: "<<teacher::name<<" and "<<teacher::college<<endl;
            cout<<"name and college of teaching assistant: "<<name<<" and "<<college<<endl;
        }

    };

    int main()
    {
        teaching_assistant t;
        t.student::getdata();
        t.teacher::getdata();
        t.getdata();
        t.putdata();
        return 0;
    }
