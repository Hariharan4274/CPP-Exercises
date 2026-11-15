#include<iostream>
using namespace std;
int main(){
  int start;
  cout<<"Enter a starting number: "<<endl;
  cin>>start;
  do{
    cout<<start<<endl;
    start++;
  }while(start<=4);
  return 0;
}