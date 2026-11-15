#include<iostream>
#include<string>
using namespace std;
int main(){
  string name;
  cout<<"Enter the Name: "<<endl;
  getline(cin, name);
  cout<<"Name using getline: "<<name<<endl;
  return 0;
}