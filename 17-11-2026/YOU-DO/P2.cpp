#include<iostream>
using namespace std;

void showDemomarks(){
  cout<<50<<" / ";
}

int main(){
  int input;
  cout<<"Enter the mark: "<<endl;
  cin>>input;
  showDemomarks();
  cout<<input;
  return 0;
}