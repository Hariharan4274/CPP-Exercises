#include<iostream>
using namespace std;
int addBonus(int a){
  cout<<a<<endl;
  cout<<a+5;
  return 1;
}

int main(){
  int user;
  cout<<"Enter the number: "<<endl;
  cin>>user;
  addBonus(user);
  return 0;
}