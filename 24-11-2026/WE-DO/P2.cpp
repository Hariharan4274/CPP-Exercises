#include<iostream>
using namespace std;

class employee{
  public:
    int emp_id;
    string emp_name;
    string emp_dept;
    void displayCard(){
      cout<<emp_id<<endl;
      cout<<emp_name<<endl;
      cout<<emp_dept<<endl;
    }

};

int main(){
  employee Arun;
  cout<<"Enter the id: "<<endl;
  cin>>Arun.emp_id;
  cout<<"Enter the name: "<<endl;
  getline(cin>>ws, Arun.emp_name);
  cout<<"Enter the department: "<<endl;
  getline(cin>>ws, Arun.emp_dept);
  Arun.displayCard();
}