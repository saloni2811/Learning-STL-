#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
  // d.pop_front(); //aage ka element udayega
  //  d.pop_back(); //peeche ka element udayega
  cout<<endl;
  cout<<"first index: "<<d.at(1)<<endl;
  cout<<"first element: "<<d.front()<<endl;
  cout<<"last element: "<<d.back()<<endl;
  cout<<"before erase: "<<d.size()<<endl;
  d.erase(d.begin(),d.begin()+1);
  cout<<"after erase: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
}