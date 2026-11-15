#include<iostream>
using namespace std;
int main(){
  int cards, oddcount=0, evencount=0;
  cout<<"Enter the number of cards: "<<endl;
  cin>>cards;
  for(int i=1; i<=cards; i++){
    (i%2!=0)? oddcount+=i*i : evencount++;
  }
  cout<<"The odd count is "<<oddcount<<endl<<"The even count is "<<evencount;
  return 0;
}