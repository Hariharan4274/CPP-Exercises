#include<iostream>
using namespace std;
int main(){
  int day, start=0, total=0, target=12, f_days=0;
  cout<<"Enter the rided days: "<<endl;
  cin>>day;
  for(int i=1; i<=day; i++){
    start+=2;
    total+=start;
    cout<<"Distance: "<<start<<" "<<"Total: "<<total<<endl;
    if(total<=target){
      f_days++;
    }
  }

  if(total<target){
    cout<<"Target not reached";
  }else{
    cout<<"Days: "<<f_days;
  }
  return 0;
}