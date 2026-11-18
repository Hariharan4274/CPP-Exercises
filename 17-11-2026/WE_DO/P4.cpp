#include<iostream>
using namespace std;

void showSeats(int a){
  cout<<a;
}

int main(){
  int count;
  cout<<"Enter the number:"<<endl;
  cin>>count;
  showSeats(count);
  return 0;
}