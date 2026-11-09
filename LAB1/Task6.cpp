#include<iostream>
using namespace std;
struct Product{
  int product ID;
  string productName;
  float price;
  int quantity;
};
int main(){
  student p1;
  float totalPrice;
  cout<<"Enter product ID:";
  cin>>p1.productID;
  cout<<"Enter product name:";
  cin>>p1.productName;
  cout<<"Enter price:";
  cin>>p1.price;
  cout<<"Enter quantity:"<<endl;
  cin>>p1.quantity;
  totalPrice=p1.price *p1.quantity;
  cout<<"product information:"<<endl;
  cout<<"product ID: "<<p1.productID<<endl;
  cout<<"Product name: "<<p1.productName<<endl;
  cout<<"Price: "<<p1.price<<endl;
  cout<<"Quantity:"<<p1.quantity<<endl;
  cout<<"Total price:"<<totalPrice<<endl;
  return 0;
}