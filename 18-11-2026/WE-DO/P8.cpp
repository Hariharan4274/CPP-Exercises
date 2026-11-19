#include<iostream>
using namespace std;

int main(){
  int arr[5];
  int index=0, count=0;
  int *ptrindex;
  cout<<"Enter the elements: "<<endl;
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
  ptrindex = &index;
  for(int i=0;i<5;i++){
    count+=arr[*ptrindex];
    *ptrindex = *ptrindex + 1;
  }
  cout<<count;
  return 0;
}