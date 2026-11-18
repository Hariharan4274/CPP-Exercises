#include<iostream>
using namespace std;

int twice(int a){
  return a*2;
}

double twice(double a){
  return a*2;
}

int main(){
  int user1;
  double user2;
  cout<<"Enter the numbers: "<<endl;
  cin>>user1>>user2;
  cout<<"The doubled values: "<<twice(user1)<<", "<<twice(user2);
  return 0;
}