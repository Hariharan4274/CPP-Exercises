#include<iostream>
using namespace std;
int readChoice(){
  int a;
  cout<<"Enter your choice: "<<endl;
  cin>>a;
  return a;
}

int main(){
  int a=readChoice(), b;
  if(a==1||a==2){
    cout<<"Your choice is "<<a;
  }
  else{ 
    cout<<"Enter only Choice 1 or 2 "<<endl;
    b=readChoice();
    cout<<"Your choice is "<<b;
  }
  return 0;
}