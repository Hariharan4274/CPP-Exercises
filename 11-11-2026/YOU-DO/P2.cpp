#include<iostream>
using namespace std;
int main(){
  int amt, limit, visits=0;
  cout<<"Enter amount  and limit: "<<endl;
  cin>>amt>>limit;
  while(amt>0){
    visits++;
    if(amt>=limit){
      cout<<limit<<endl;
      amt-=limit;
    }
    else{
      cout<<amt<<endl;
      amt=0;
    }
  }
  cout<<"Visits: "<<visits;
  return 0;
}