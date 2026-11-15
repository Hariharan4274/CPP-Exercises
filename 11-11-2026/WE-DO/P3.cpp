#include<iostream>
using namespace std;
int main(){
  int rows, columns, sum=0, max=0;
  cout<<"Enter rows and columns: "<<endl;
  cin>>rows>>columns;
  for(int i=1; i<=rows; i++){
    for(int j=1; j<=columns; j++){
      cout<<i*j<<" ";
      sum+=i*j;
      if(i==rows&&j==columns){
        max=i*j;
      }
    }
    cout<<endl;
  }
  cout<<"Sum: "<<sum<<endl<<"Maximum: "<<max;
  return 0;
}   