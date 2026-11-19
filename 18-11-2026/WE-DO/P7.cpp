#include<iostream>
using namespace std;

int main(){
  int arr[4];
  int index;
  int *ptrindex;
  cout<<"Enter the index: "<<endl;
  cin>>index;
  cout<<"Enter the elements: "<<endl;
  for(int i=0;i<4;i++){
    cin>>arr[i];
  }
  ptrindex = &index;
  cout<<arr[*ptrindex];

}