#include<iostream>
using namespace std;
int const CAP = 30;

int remainingSeats(int a){
  return CAP-a;
}

int main(){
  int count;
  cout<<"Enter the number:"<<endl;
  cin>>count;
  cout<<"Remaining Seats: "<<remainingSeats(count);
}