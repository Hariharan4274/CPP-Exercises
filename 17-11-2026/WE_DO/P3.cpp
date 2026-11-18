#include<iostream>
using namespace std;

void addBoxes(int a){
  int count=0;
  while(a>=10){
    count++;
    a-=10;
  }
  cout<<count<<" / ";
}

int main(){
  int count;
  cout<<"Enter the number:"<<endl;
  cin>>count;
  addBoxes(count);
  cout<<count;
  return 0;
}