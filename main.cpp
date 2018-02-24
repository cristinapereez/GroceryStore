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
  const int LIST_SIZE = 5;

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
    if( numItems < LIST_SIZE )
    {
        cout<<"What is the item?"<<endl;
        cin>>list[numItems];
        numItems++;
    }
    else
    {
        cout<<"You'll need a bigger list!"<<endl;
        break;
    }
 }

} while(input != 'q' && input != 'Q' );

 
  return 0;
}
