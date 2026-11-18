#include<iostream>
using namespace std;

void parcel(int a){
  cout<<"Without Handling Fee: "<<a<<endl;
}

void parcel(int a, int b){
  cout<<"With Handling Fee: "<<a+b<<endl;
}

int main(){
  int user1, user2;
  cout<<"Enter the two numbers: "<<endl;
  cin>>user1>>user2;
  parcel(user1);
  parcel(user1, user2);
  return 0;
}