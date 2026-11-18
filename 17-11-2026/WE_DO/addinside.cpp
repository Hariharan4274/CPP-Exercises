#include<iostream>
using namespace std;
void add(){
  int a, b;
  cout<<"Enter two inputs: "<<endl;
  cin>>a>>b;
  cout<<"The addition of two numbers: "<<a+b<<endl;
}
void add(int a, int b){
   cout<<"The addition of two numbers: "<<a+b<<endl;
}
void add(int a, int b, float c){
   cout<<"The addition of two numbers: "<<a+b+c<<endl;
}
int add(int a, float b){
  cout<<"The addition of two numbers: "<<a+b<<endl; 
  return ;
}

int add(int a, int b, int c){
  cout<<"The addition of two numbers: "<<a+b+c<<endl; 
  return a+b+c;
}
int main(){
  add();
  add(1,2);
  add(1,2,5);
  add(2, 3.5f,5);
  add(2,3.7f);
  return 0;
}