#include<iostream>
#include<string>
using namespace std;

struct Book{
  int id;
  string bookName;
  int numCopies;

};

int main(){
  Book Hari;
  cout<<"Enter the Book ID: "<<endl;
  cin>>Hari.id;
  cout<<"Enter the Book Name: "<<endl;
  getline(cin >> ws, Hari.bookName);
  cout<<"Enter the Number of Copies:  "<<endl;
  cin>>Hari.numCopies;

  cout<<"ID "<<Hari.id<<endl;
    cout<<Hari.bookName<<endl;
      cout<<"Copies: " <<Hari.numCopies<<endl;

      return 0;
}
