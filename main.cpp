// Author: khaled Alrashdi
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
 vector <string> list;
  int numItems = 0;
  char input;
 string input2;
  do
    {

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(input == 'A' || input == 'a')
    {
    cout<<"What is the item?\n"; 
    cin>>input2;
    list.push_back(input2);    
    }
 
  }  while(input!='q' && input!='Q');

if (list.size() != 0)
{

        cout<<"==ITEMS TO BUY==";

for(int numItems=0; numItems< list.size(); numItems++)
    {
    cout<<endl<<numItems+1 << " "<< list[numItems];
    } cout<<endl;
} else
{
  cout<<"No items to buy!"<<endl;   
}  
  return 0;
}
