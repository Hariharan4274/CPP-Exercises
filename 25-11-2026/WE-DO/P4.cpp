#include<iostream>
using namespace std;
 class Person{
  string personname;
 };
 class Student: public Person{
  int roll;
  int theory;
  int lab;
  int Student(string name){
    personname = name;
    return 0;
  }
 }
 class Report: public Student{
  int total;
  int Report(int marks1, marks2, rollnum, string name){
    roll = rollnum;
    theory = marks1;
    lab = marks2;
    this->total = theory+lab;
    Student(name);
    return 0;
  }
 };

 int main(){
  int roll, mark1, mark2;
  string name;
  cout<<"Enter the name: "<<endl;
  cin>>name;
  cout<<"Enter the roll: "<<endl;
  cin>>roll;
  cout<<"Enter the theory: "<<endl;
  cin>>mark1;
  cout<<"Enter the lab: "<<endl;
  cin>>mark2;
  Report p1(mark1, mark2, roll, name);
  cout<<
 }