#include<iostream>
using namespace std;

int area(int length, int breadth){
  return length*breadth;
}

int area(int sides){
  return sides*sides;
}

int main(){
  int length, breadth, sides;
  cout<<"Enter the length, breadth, sides:"<<endl;
  cin>>length>>breadth>>sides;

  cout<<"Area of Rectangle: "<<area(length,breadth)<<endl<<"Area of Square: "<<endl<<area(sides);
}