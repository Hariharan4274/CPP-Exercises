#include<iostream>
using namespace std;
int main(){
  int score;
  int* ptrScore;
  cout<<"Enter the score: "<<endl;
  cin>>score;
  ptrScore = &score;
  cout<<"Score: "<<*ptrScore<<endl;

  (*ptrScore==score)? cout<<"Same address" : cout<<"Not Same" ;
  return 0;
}