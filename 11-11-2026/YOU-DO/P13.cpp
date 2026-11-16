#include<iostream>
using namespace std;
int main(){
  int seconds;
  cout<<"Enter the seconds: "<<endl;
  cin>>seconds;
  for(int i=seconds; i>=0; i--){
    if(i==0){
      cout<<"Curtain open";
    }
    else{
      cout<<i<<endl;
    }
  }
  return 0;
}