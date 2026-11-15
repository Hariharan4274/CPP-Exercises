#include<iostream>
#include<string>
using namespace std;

int main(){
  string name;
  cout<<"Enter a Word: "<<endl;
  cin>>name;
  cout<<"The letters are "<<endl;
  for(int i=0; i<name.length(); i++){
    cout<<name[i]<<endl;
  }
  cout<<"Length is "<<name.length();
  return 0;
}