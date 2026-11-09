#include<iostream>
using namespace std;
int main(){
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  int *ptr=&number;
  cout<<"Before modification:"<<number<<endl;
  *ptr=24;
  cout<<"After modification:"<<number<<endl;
  return 0;
}