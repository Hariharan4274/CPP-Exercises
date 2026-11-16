#include<iostream>
using namespace std;
int evenCount(int a){
  if(a%2==0){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int userInput, count=0;
  cout<<"Enter a input: "<<endl;
  cin>>userInput;

  for(int i=1; i<=userInput; i++){
    if(evenCount(i)==1){
      count++;
    }
  }
  cout<<"Count: "<<count;
  return 0;
}