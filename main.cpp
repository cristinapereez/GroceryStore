//Author: Cristina Perez
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
  
//  const int LIST_SIZE = 5;
  

do
{

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
 if( input == 'a' || input == 'A')
 {
     cout<<"What is the item?"<<endl;
     cin>>item;
     int len = item.length();
    if( numItems < 5 )
    {
        list[numItems] = item;
        numItems++;       
    }
    else
    {
        cout<<"You'll need a bigger list!"<<endl;
        
    }
 }

} while(input != 'q' && input != 'Q' );

if( input == 'q' || input == 'Q')
{
   cout<<"==ITEMS TO BUY==";
   cout<<"\n 1 "<<list[0];
   cout<<"\n 2 "<<list[1];
   cout<<"\n 3 "<<list[2];
   cout<<"\n 4 "<<list[3];
   cout<<"\n 5 "<<list[4]<<endl;
} 
  return 0;
}
