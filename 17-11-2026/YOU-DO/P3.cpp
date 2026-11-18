#include<iostream>
using namespace std;

int discount(int a){
  if(a>=500){
    int discountamt = 50;
    return a-discountamt;
  }
  else{
    return a;
  }
}

int main(){
  int input;
  cout<<"Enter the rate: "<<endl;
  cin>>input;
  cout<<discount(input);
  return 0;
}