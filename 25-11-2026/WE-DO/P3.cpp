#include<iostream>
using namespace std;

class Employee{
  private:
    long long phone;
  public:
    long long getphone(){
      return phone;
    }

    void setphone(int phone){
      this->phone = phone;
    } 
};

class Technician: public Employee{
  public:
    string role;

    Technician(long long num){
      setphone(num);
    }
};

int main(){
  long long num;
  cout<<"Enter the phone number: "<<endl;
  cin>>num;
  Technician c1(num);
  cout<<"Enter the role: "<<endl;
  cin>>c1.role;

  cout<<c1.role<<":"<<c1.getphone();
}