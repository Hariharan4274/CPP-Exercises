#include<iostream>
using namespace std;
int main(){
  int digit, sumdigit=0;
  cout<<"Enter a digit code"<<endl;
  cin>>digit;
  while(digit>0){
    sumdigit+=digit%10;
    digit/=10;
  }
  cout<<"Sum of digitcode is "<<sumdigit;
  return 0;
}