#include<iostream>
using namespace std;
int main(){
  int pages, capacity, count=0;
  cout<<"Enter the total pages and capacity: "<<endl;
  cin>>pages>>capacity;
  while(pages>0){
    count++;
    if(pages>=capacity){
      pages-=capacity;
      cout<<"Pages remaining: "<<pages<<endl;
    }
    else{
      pages=0;
      cout<<"Pages remaining: "<<pages<<endl;
    }
  }
  cout<<"Batches: "<<count;
  return 0;
}