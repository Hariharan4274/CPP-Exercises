#include<iostream>
using namespace std;

class Person{
  private:
    string name;
  
  public:
    string getName(){
      return name;
    }

    void setName(string name){
      this->name = name;
    }

};

class instructor: public Person{
  public:
    string subject;
};

int main(){
  instructor Arun;
  string name, subject;
  cout<<"Enter the name: "<<endl;
  getline(cin>>ws, name);
  Arun.setName(name);
  cout<<"Enter the Subject: "<<endl;
  getline(cin>>ws, subject);
  Arun.subject = subject;

  cout<<Arun.getName()<<" teaches "<<Arun.subject<<endl;
  return 0;
}