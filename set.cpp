#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);//time complexity of insert function O(logn)
    for(auto i:s){
        cout<<i<<" ";

    }
    cout<<endl;
    /*set<int>::iterator it= s.begin();//time complexity of begin O(logn)
    it++;
    it++;
    s.erase(it);//time complexity of erase O(logn)
    for(auto i:s){
        cout<<i<<" ";//1 5 7 8 9 14


    }cout<<endl;*/
    cout<<"6 present or not: "<<s.count(6)<<endl;//time complexity of count O(logn)
    cout<<"-5 present or not: "<<s.count(-5)<<endl;

    //set<int>::iterator itr=s.find(5);//time complexity of find O(logn)
    auto itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){//time complexity of end O(logn)
            cout<<*it<<" ";
            // this will not execute since it is dynamic cout<<it<<" ";
            
            
           
    }cout<<endl;




}