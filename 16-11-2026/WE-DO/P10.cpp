#include<iostream>
using namespace std;
int productDigits(int a){
  int rem, pro=1;
  while(a>0){
    rem=a%10;
    pro*=rem;
    a/=10;
  }
  return pro;
}
int main(){
  int user, res, count=0;
  cout<<"Enter a number: "<<endl;
  cin>>user;
  while(user>=10){
    res=productDigits(user);
    user=res;
    count++;
  }
  cout<<"Final digit is "<<user<<endl<<"Count is "<<count;
  return 0;
}