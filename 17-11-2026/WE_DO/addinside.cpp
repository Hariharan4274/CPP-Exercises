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
int add(int c, float d){
  cout<<"The addition of two numbers: "<<c+d<<endl; 
  return c+d;
}

int add(int c, int d, int e){
  cout<<"The addition of two numbers: "<<c+d+e<<endl; 
  return c+d+e;
}
int main(){
  add();
  add(1,2);
  add(1,2,5);
  add(2, 3.5f,5);
  add(2,3.7f);
  return 0;
}