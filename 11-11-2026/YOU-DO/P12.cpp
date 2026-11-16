#include<iostream>
using namespace std;
int main(){
  int sides, count=0;
  cout<<"Enter the board sides: "<<endl;
  cin>>sides;

  for(int i=1; i<=sides; i++){
    for(int j=1; j<=sides; j++){
      if((i+j)%2==0){
        cout<<"#"<<" ";
        count++;
      }
      else{
        cout<<"."<<" ";
      }
    }
    cout<<endl;
  }
  cout<<"Darked squares: "<<count;
  return 0;
}