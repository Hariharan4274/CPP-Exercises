#include<iostream>
using namespace std;

class Asset{
  protected:
    int id;
};

class Cylinder: public Asset{
  private:
    int capacity;
  
  public:
    int getcapacity(){
      return capacity;
    }

    void setcapacity(int capacity){
      this->capacity = capacity;
    }

    void setid(int a){
      id = a;
    }

    int getid(){
      return id;
    }
};

int main(){
  Cylinder user1;
  int capacity, id;
  cout<<"Enter the asset ID: "<<endl;
  cin>>id;
  user1.setid(id);
  cout<<"Enter the capacity in litres: "<<endl;
  cin>>capacity;
  user1.setcapacity(capacity);

  cout<<"Asset "<<user1.getid()<<" | "<<"Capacity "<<user1.getcapacity()<<"L";
  return 0;
}
