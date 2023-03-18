#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("saloni");
    q.push("singh");
    q.push("love");
    cout<<"size before pop: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
    q.pop();
    cout<<"size after pop: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
    cout<<"empty or not: "<<q.empty()<<endl;




}