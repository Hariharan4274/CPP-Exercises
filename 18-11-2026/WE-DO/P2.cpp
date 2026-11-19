#include<iostream>
using namespace std;
int main(){
  int original, replaced;
  int *ptrreplaced;
  cout<<"Enter the original and Corrected: "<<endl;
  cin>>original>>replaced;
  cout<<"Before Change: "<<original<<endl;
  ptrreplaced = &replaced;
  original = *(ptrreplaced);
  cout<<"After Change: "<<original<<endl;
  

}