#include <iostream>
#include <string>
using namespace std;
int main() {
  string username, password;
  int choice,a;
  int money = 1000;

  cout<<"Welcome to our bank"<<endl;
  x: cout<<"What is your username ? ";
  cin>>username;
  cout<<"What is your password ? ";
  cin>>password;

  if(username=="Jhon"||username=="jhon" && password=="1234" ){
   y: cout<<"Do you want to (1)withdraw or (2)deposit ?"<<endl;
  }
  else{
    goto x;
  }

  cin>>choice;
  if(choice==1){
    z: cout<<"How many?"<<endl;
    cin>>a;
    money = money - a;
    if(money>=0){
    cout<<"Your remaining money is "<<money<<endl;
      }
    else{
      goto z;
    }
  }

  else if(choice==2){
    cout<<"How many?"<<endl;
    cin>>a;
    money = money + a;
    cout<<"Your remaining money is "<<money<<endl;
    
  }
  else{
    goto y;
  }
}