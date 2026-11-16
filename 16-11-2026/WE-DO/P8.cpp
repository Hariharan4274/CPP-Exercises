#include<iostream>
using namespace std;
int greatest(int a, int b, int c){
  if(a>b && a>c){
    return a;
  }
  else if(b>c){
    return b;
  }
  else{
    return c;
  }
}

int main(){
  int a, b, c;
  cout<<"Enter three numbers: "<<endl;
  cin>>a>>b>>c;
  cout<<"Greatest number is "<<greatest(a,b,c);
  return 0;
}