#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Saloni");
        s.push("Singh");

    s.push("Love");
    cout<<"top element: "<<s.top()<<endl;
    cout<<"size of the stack: "<<s.size()<<endl;
    s.pop();
        cout<<"top element: "<<s.top()<<endl;
            cout<<"size of the stack: "<<s.size()<<endl;
            cout<<"empty or not: "<<s.empty()<<endl;





}