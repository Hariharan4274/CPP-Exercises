#include<iostream>
using namespace std;

int previewTicketPrice(int price){
  return price+20;
}

int main(){
  int ticket;
  cout<<"Enter the ticket price: "<<endl;
  cin>>ticket;
  cout<<"Ticket price before fee: "<<ticket<<endl;
  cout<<"Ticket price after fee: "<<previewTicketPrice(ticket)<<endl;
  return 0;
}