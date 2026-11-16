#include<iostream>
#include<cstdlib>
using namespace std;
int diff(int a, int b){
  return abs(a-b);
}

int main(){
  int a, b;
  cout<<"Enter two temperatures: "<<endl;
  cin>>a>>b;
  cout<<"The difference is "<<diff(a,b);
  return 0;
}