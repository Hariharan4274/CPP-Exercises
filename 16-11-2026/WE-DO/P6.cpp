#include<iostream>
#include<cmath>
using namespace std;
int square(int a){
  return sqrt(a);
}

int main(){
  int a, res;
  cout<<"Enter the number: "<<endl;
  cin>>a;
  res = square(a);
  cout<<"The squared number is "<<res;
  return 0;
}