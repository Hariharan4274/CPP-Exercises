#include<iostream>
using namespace std;

class Announcement{
  public: 
    void show(){
      cout<<"General Announcement"<<endl;
    }
};


class Sports: public Announcement{
  public:
    void show(){
      cout<<"Sports Announcement"<<endl;
    }
};

int main(){
  int choice;
  cout<<"Enter your choice: "<<endl;
  cin>>choice;

  if(choice ==1){
    Announcement general;
    general.show();
  }
  else if(choice == 2){
    Sports sp;
    sp.show();
  }
  else if(choice == 3){
    Announcement general;
    Sports sp;
    general = sp;
    general.show(); 
  }
  else{
    cout<<"Invalid Choice";
  }
  return 0;

}