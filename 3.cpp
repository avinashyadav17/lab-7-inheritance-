#include<iostream>
using namespace std;

class student {
    string rollno;
public:
    void setroll() {
        cout << "Enter roll no: ";

        getline(cin, rollno);
    }

    void showroll() {
        cout << "Roll no is: " << rollno << endl;
    }
};

class internalexam : public virtual student {
protected:
    int internalmarks;
public:
    void setinternalmarks() {
        cout << "Enter total internal marks: ";
        cin >> internalmarks;
    }

    void showinternalmarks() {
        cout << "Total internal marks: " << internalmarks << endl;
    }
};

class externalexam : public virtual student {
protected:
    int externalmarks;
public:
    void setexternalmarks() {
        cout << "Enter external marks: ";
        cin >> externalmarks;
    }

    void showexternalmarks() {
        cout << "External marks: " << externalmarks << endl;
    }
};

class finalresult : public internalexam, public externalexam {
    int totalmarks;
public:
    void setdata() {
        setroll();
        setinternalmarks();
        setexternalmarks();
        totalmarks = internalmarks + externalmarks;
    }

    void showdata() {
        showroll();
        showinternalmarks();
        showexternalmarks();
        cout << "Total marks: " << totalmarks << endl;
    }
};

int main() {
    finalresult f;
    f.setdata();
    f.showdata();
    return 0;
}
