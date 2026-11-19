#include<iostream>
using namespace std;
int main(){
  int first, second;
  int *p ,*q;
  cout<<"Enter first and second: "<<endl;
  cin>>first>>second;
  p = &first;
  q = p;
  ++*q;
  q = &second;
   cout<<*p<<" "<<*q;

}