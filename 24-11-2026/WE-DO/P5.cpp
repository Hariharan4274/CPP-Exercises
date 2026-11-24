#include<iostream>
using namespace std;

class eventBooking{
  private:
    int seatCount;
  
  public:
    void setseatCount(int seatCount){
      this->seatCount = seatCount;
    }

    int getseatCount(){
      return seatCount;
    }

    int rem_seats(int seats){
      if(seats<=this->seatCount){
        this->seatCount-=seats;
        return 1;
      }
      else{
        return -1;
      }
    }
};

int main(){
  int requests;
  eventBooking customer;
  cout<<"Enter the number of requests: "<<endl;
  cin>>requests;
  customer.setseatCount(30);

  for(int i=1; i<=requests; i++){
    int numreq;
    cout<<"Enter the number of seats for request "<<i<<": "<<endl;
    cin>>numreq;
    if(customer.rem_seats(numreq)==1){
      cout<<"Accepted ";
      cout<<customer.getseatCount();
    }
    else{
      cout<<"Rejected ";
      cout<<customer.getseatCount()<<endl;
    }

  }

  return 0;

}