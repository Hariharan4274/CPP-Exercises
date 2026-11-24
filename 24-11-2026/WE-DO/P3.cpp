#include<iostream>
using namespace std;

class Room{
  private:
    int length;
    int breadth;

  public:
    void setLength(int length){
      this->length = length;
    }

    int getLength(){
      return length;
    }
        void setBreadth(int breadth){
      this->breadth = breadth;
    }

    int getBreadth(){
      return breadth;
    }

};

int main(){
  Room num1;
  int length, breadth;
  cout<<"Enter the Length and breadth: "<<endl;
  cin>>length>>breadth;

  num1.setLength(length);
  num1.setBreadth(breadth);

  cout<<"Area of Room: "<<num1.getLength()*num1.getBreadth();
  return 0;
}