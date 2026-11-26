#include<iostream>
using namespace std;

class Vehicle{
public:  
  int id;
  
  Vehicle(int id) : id(id){}
};

class Bus: public Vehicle{
 public: 
  int seatCount;
  
  Bus(int seatCount, int id) : 
  seatCount(seatCount), Vehicle(id){}
};

class Van: public Vehicle{
public:
  int payload;
  
  Van(int payload, int id) : payload(payload), Vehicle(id) {}
};

int main(){
  int vanid, busid, seatCount, payload;

  cout<<"Enter the bus ID: "<<endl;
  cin>>busid;
  cout<<"Enter the seat count: "<<endl;
  cin>>seatCount;
  cout<<"Enter the van ID: "<<endl;
  cin>>vanid;
  cout<<"Enter the payload: "<<endl;
  cin>>payload;

  Bus bs(seatCount, busid);
  Van vn(payload, vanid);

  cout<<"Bus "<<bs.id<<":"<<bs.seatCount<<" seats"<<endl;
  cout<<"Van "<<vn.id<<":"<<vn.payload<<" kg"<<endl;
  
  return 0;
}