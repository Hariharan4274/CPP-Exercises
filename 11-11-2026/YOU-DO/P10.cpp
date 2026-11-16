#include<iostream>
using namespace std;
int main(){
  int lanes, start=0,total=0;
  cout<<"Enter the nummber of lanes: "<<endl;
  cin>>lanes;
  for(int i=1; i<=lanes; i++){
    start+=3;
    cout<<start<<endl;
    total+=start;
  }
  cout<<"Marker total: "<<total;
}