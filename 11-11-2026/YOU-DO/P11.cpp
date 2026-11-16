#include<iostream>
using namespace std;
int main(){
  int tag, count=0, rem;
  cout<<"Enter a tag number: "<<endl;
  cin>>tag;
  do{
    rem=tag%10;
    if(rem%2==0){
      count++;
    }
    tag/=10;
  }while(tag>0);
  cout<<"Even digits: "<<count;
  return 0;
}