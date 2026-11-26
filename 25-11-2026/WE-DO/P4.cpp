#include <iostream>
#include <string>

using namespace std;


class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}
};


class Student : public Person {
protected:
    int roll;

public:
    
    Student(string n, int r) : Person(n), roll(r) {}
};


class AssessmentReport : public Student {
private:
    int theoryMarks;
    int labMarks;

public:
    
    AssessmentReport(string n, int r, int theory, int lab) 
        : Student(n, r), theoryMarks(theory), labMarks(lab) {}

    void display() const {
        int total = theoryMarks + labMarks;
        cout << name << " | Roll " << roll << " | Total " << total << endl;
    }
};

int main() {
    string name;
    int roll, theory, lab;

    cout << "Enter the name: ";
    getline(cin, name);

    cout << "Enter the roll: ";
    cin >> roll;

    cout << "Enter theory marks: ";
    cin >> theory;

    cout << "Enter lab marks: ";
    cin >> lab;

    AssessmentReport report(name, roll, theory, lab);
    report.display();

    return 0;
}
