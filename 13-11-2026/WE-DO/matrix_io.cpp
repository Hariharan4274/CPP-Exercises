#include<iostream>
using namespace std;
int main(){
  int user[3][3], count=1;
  cout<<"Enter the numbers of matrix: "<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      user[i][j] = count;
      count++;
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<user[i][j]<<"\t";
    }
     
       cout<<endl;
  }
  return 0;
}