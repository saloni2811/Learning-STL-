#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="saloni";
    m[12]="singh";
    m[5]="BMW";
    m.insert({14,"love"});
    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }cout<<endl;
    cout<<"finding 12: "<<m.count(12)<<endl;
    cout<<"finding -13: "<<m.count(-13)<<endl;
    m.erase(12);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }cout<<endl<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

}