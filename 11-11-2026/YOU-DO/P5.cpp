#include<iostream>
using namespace std;
int main(){
  int scores, f_score=30, sum=0, qualified=0;
  cout<<"Enter scores: "<<endl;
  cin>>scores;
  for(int i=2; i<=scores; i++){
    f_score+=10;
    if(f_score>=60){
      cout<<f_score<<endl;
      sum+=f_score;
      qualified++;
  }
 }
  return 0;
}