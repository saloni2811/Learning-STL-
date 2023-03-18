#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);//every element will start with 1 ; 5 ka matalb hai size 5 hoga
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> last(a);//a ko copy kar dega
    cout<<"print last: "<<endl;for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(1);
     cout<<"capacity: "<<v.capacity()<<endl;
     v.push_back(2);
      cout<<"capacity: "<<v.capacity()<<endl;
      v.push_back(3);//bracket mai size hai 
      cout<<"capacity: "<<v.capacity()<<endl;//khud ko double kr leta h
      cout<<"size: "<<v.size()<<endl;
    cout<<"Element at 2nd index: "<<v.at(2)<<endl;
      cout<<"first element: "<<v.front()<<endl;
      cout<<"last element: "<<v.back()<<endl;
      cout<<"before pop"<<endl;
      for(int i:v)
      {
        cout<<i<<" ";
      }
      cout<<endl;
      v.pop_back();//size decrease krta hai
      cout<<"after pop: "<<endl;
      for(int i:v){
        cout<<i<<" ";
      }
      cout<<endl;
      cout<<"before clear size: "<<v.size()<<endl;
      v.clear();//clears the size 
      cout<<"after clear size: "<<v.size()<<endl;




    


}