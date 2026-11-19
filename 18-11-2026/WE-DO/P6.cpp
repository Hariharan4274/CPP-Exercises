#include<iostream>
using namespace std;
void addBonus(int a){
  int *ptr_a;
  ptr_a = &a;
  *ptr_a +=5;
  cout<<a;
}
int main(){
  int user;
  cout<<"Enter the number: ";
  cin>>user;
  addBonus(user);
}