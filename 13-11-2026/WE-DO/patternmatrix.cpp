#include<iostream>
using namespace std;

int main(){
  int pattern1[3][3];


  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(i>=j){
        cout<<"*"<<"\t";
      }
      
   }
   cout<<endl;
 }
   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(i>=j){
        cout<<j+1<<"\t";
      }
    }
    cout<<endl;
  }

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(i>=j){
        cout<<i+1<<"\t";
      }
    }
    cout<<endl;
  }
  return 0;
}