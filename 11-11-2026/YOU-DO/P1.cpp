#include<iostream>
using namespace std;
int main(){
  int guest, count=0;
  cout<<"Enter number of guests: "<<endl;
  cin>>guest;
  for(int i=1; i<=guest; i++){
    cout<<i<<endl;
    count++;
  }
  cout<<"Badges issued: "<<count;
  return 0;
}