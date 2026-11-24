#include<iostream>
using namespace std;

class Bus{
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
      this->seatCount-=seats;
      return getseatCount();
    }
};

int main(){
  Bus bus1;
  Bus bus2;
  int bus1_seat, bus2_seat, book_seat;
  cout<<"Enter the available seats for Bus 1: "<<endl;
  cin>>bus1_seat;
  bus1.setseatCount(bus1_seat);
  cout<<"Enter the available seats for Bus 2: "<<endl;
  cin>>bus2_seat;
  bus2.setseatCount(bus2_seat);
  cout<<"Enter the number of seats to book on Bus 1: "<<endl;
  cin>>book_seat;
  cout<<"Bus 1 available: "<<bus1.rem_seats(book_seat)<<endl;
  cout<<"Bus 2 available: "<<bus2.getseatCount();

  return 0;

}