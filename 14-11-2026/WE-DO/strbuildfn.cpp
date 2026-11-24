#include<iostream>
using namespace std;

int main(){
  string sample = "Hello this is a test";
  cout<<"The string is "<<sample<<endl;
  cout<<"The length of the string is "<<sample.length()<<endl;
  cout<<"The first character of the string is "<<sample.front()<<endl;
  cout<<"The last character of the string is "<<sample.back()<<endl;
  cout<<"The Existence of the string is "<<sample.find("test")<<endl;
  cout<<"The Substring of the sample is "<<sample.substr(5, 10)<<endl;
  cout<<"Insert the string: "<<sample.insert(0, "Hello ")<<endl;
  cout<<"Erase the string: "<<sample.erase(0, 6)<<endl;
  cout<<"Replace the string: "<<sample.replace(16, 4, "play");

  return 0;
}