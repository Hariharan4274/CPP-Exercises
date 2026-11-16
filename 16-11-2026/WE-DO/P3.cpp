#include<iostream>
using namespace std;
int addScores(int first, int second);
int addScores(int first, int second){
  return first+second;
}

int main(){
  int a, b, sum;
  cout<<"Enter first and second number: "<<endl;
  cin>>a>>b;
  sum=addScores(a,b);
  cout<<"Sum is "<<sum;
  return 0;

}