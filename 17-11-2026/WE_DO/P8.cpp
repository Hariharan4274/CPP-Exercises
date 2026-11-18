#include<iostream>
using namespace std;

int checkBalance(int cost, int money){
  return money-cost;
}

int main(){
  int money, cost;
  cout<<"Enter the cost and money: "<<endl;
  cin>>cost>>money;
  cout<<"Money: "<<money<<" "<<"Balance: "<<checkBalance(cost, money);
  return 0;
}