#include<iostream>
using namespace std;
int main(){
  int first[3][3];
  int second[3][3];
  int sum[3][3];
  int sub[3][3];
  cout<<"Enter the elements of first  matrix: "<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin>>first[i][j];
    }
  }
  cout<<"Enter the elements of second matrix: "<<endl;
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin>>second[i][j];
    }
  }

  cout<<"ADDITION"<<endl;

   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      sum[i][j]=first[i][j]+second[i][j];
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"SUBRACTION"<<endl;
     for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      sub[i][j]=first[i][j]-second[i][j];
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<sub[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}