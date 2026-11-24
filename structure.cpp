#include<iostream>
using namespace std;

  struct students{
    int rollno;
    string name;
    int  maths;
    int english;
    int science;
    int total;
    float avg;
    int rank;
    bool passornot;
  };

int main(){
  students hari;
  cout<<"Enter the name: "<<endl;
  cin>>hari.name;
  cout<<"Enter the roll number: "<<endl;
  cin>>hari.rollno;
  cout<<"Enter the english score: "<<endl;
  cin>>hari.english;
  cout<<"Enter the maths score: "<<endl;
  cin>>hari.maths;
  cout<<"Enter the science score: "<<endl;
  cin>>hari.science;
  cout<<"Enter the rank: "<<endl;
  cin>>hari.rank;
  cout<<"Are you pass or not: "<<endl;
  cin>>hari.passornot;

  hari.avg= (hari.english+hari.science+hari.maths)/3;
  
  cout<<"Name: "<<hari.name<<endl;
  cout<<"Roll no: "<<hari.rollno<<endl;
  cout<<"English Mark: "<<hari.english<<endl;
  cout<<"Maths Mark: "<<hari.maths<<endl;
  cout<<"Science Mark: "<<hari.science<<endl;
  cout<<"Total: "<<hari.english+hari.science+hari.maths<<endl;
  cout<<"Average: "<<hari.avg<<endl;
  cout<<"Rank: "<<hari.rank<<endl;
  (hari.passornot==0)?cout<<"Fail" : cout<<"Pass";
  return 0;
}
