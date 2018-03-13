//Author: Cristina Perez
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string> list; //array of 5 strings
  int numItems;
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
     list.push_back(item);
       
}

} while(input != 'q' && input != 'Q' );


/*   cout<<"==ITEMS TO BUY==";
   cout<<"\n1 "<<list[0];
   cout<<"\n2 "<<list[1];
   cout<<"\n3 "<<list[2];
   cout<<"\n4 "<<list[3];
   cout<<"\n5 "<<list[4]<<endl
*/

if( input == 'q' || input == 'Q')
{
 if( list.empty() == true )
    {
      cout<<"No items to buy!"<<endl;       
    }
    else
    {
     cout<<"==ITEMS TO BUY=="<<endl;

    for(int i = 0; i < list.size(); i++)
    {
     cout<<i+1<<" "<<list[i]<<endl;
    }
    }


}  
    
 

  return 0;
}
