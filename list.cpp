#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
   l.erase( l.begin());//earse : O(n) ; baaki sabka O(1) hota hai
   cout<<"after erase: "<<endl;
  for(int i:l){
    cout<<i<<" ";
  }
  cout<<endl;
   cout<<"size of the list: "<<l.size()<<endl;
   list<int> n(l);//copied l in n
  
   cout<<"printing n: ";
   for(int i:n){
    cout<<i<<" ";


   }
   cout<<endl;
          list<int> s(5,14);//initialisinfg5 element in s assigning 14 as their element
cout<<"printing s: ";
   for(int i:s){
    cout<<i<<" ";


   }
}
