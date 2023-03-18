#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;//maximum heap
    priority_queue<int,vector<int>,greater<int>> mini;//maximum heap
    maxi.push(7);
    maxi.push(9);
    maxi.push(5);
    maxi.push(1);
    maxi.push(0);
    int n= maxi.size();
    cout<<"size: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(7);
    mini.push(9);
    mini.push(5);
    mini.push(1);
    mini.push(0);
    int m= mini.size();
    cout<<"size: "<<n<<endl;
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"empty or not: "<<maxi.empty()<<endl;
    cout<<"empty or not: "<<mini.empty()<<endl;
//emptied both of them by popping

}