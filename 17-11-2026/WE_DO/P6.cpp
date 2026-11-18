#include<iostream>
using namespace std;

int perimeter(int length, int breadth){
  return (2*length)+(2*breadth);
}

int perimeter(int sides){
  return 4*sides;
}

int main(){
  int length, breadth, sides;
  cout<<"Enter the length, breadth, sides:"<<endl;
  cin>>length>>breadth>>sides;

  cout<<"Perimeter of Rectangle: "<<perimeter(length,breadth)<<endl<<"Perimeter of Square: "<<endl<<perimeter(sides);
}