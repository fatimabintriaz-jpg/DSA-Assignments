#include<iostream>
using namespace std;
int main(){
int num=12;
int *ptr=&num;
int **pp=&ptr;
cout<<"Original value: "<<num<<endl;
**pp=24;
cout<<"Modified value: "<<num<<endl;
return 0;
}