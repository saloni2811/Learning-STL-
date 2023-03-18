#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(8);
    v.push_back(5);
    v.push_back(0);

    cout<<"finding 8: "<<binary_search(v.begin(),v.end(),8)<<endl;
    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),8)-v.begin()<<endl;
    cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),0)-v.begin()<<endl;

    int a=5;
    int b=1;

    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a: "<<a<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"string: "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate: "<<endl;
    for (int i:v){
        cout<<i<<" ";
    }
cout<<endl<<"After sorting: "<<endl;

    sort(v.begin(),v.end());
    for (int i:v){
        cout<<i<<" ";
    }

    

}