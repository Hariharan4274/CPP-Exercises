#include <iostream>
#include <string>

using namespace std;

class Reception {
public:
    virtual void welcome(string name) {
        cout << name << endl;
    }
    
    virtual void welcome(string name, string dept) {
        cout << name << " - " << dept << endl;
    }
    
    virtual ~Reception() = default;
};

class Person1 : public Reception {
public:
    void welcome(string name) override {
        cout << "Welcome " << name << endl;
    }
};

class Person2 : public Reception {
public:
    void welcome(string name, string dept) override {
        cout << "Welcome " << name << " to " << dept << endl;
    }
};

int main() {
    int choice;
    string name, dept;
    
    cout << "Enter your Choice (1 or 2): " << endl;
    cin >> choice;

    if (choice == 1) {
        Person1 p1;               
        Reception *Receptionptr = &p1;   
        cout << "Enter visitor Name: " << endl;
        cin >> name;
        Receptionptr->welcome(name);
    } 
    else if (choice == 2) {
        Person2 p2;                      
        Reception *Receptionptr = &p2;   
        cout << "Enter visitor Name and department: " << endl;
        cin >> name >> dept;
        Receptionptr->welcome(name, dept);
    } 
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
