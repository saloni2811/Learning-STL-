#include <iostream>
#include<bits/stdc++.h >
using namespace std;
int main()
{
    stack<int> s;
    s.push(14);
    s.push(04);

    s.push(2022);

    cout << "top element: " << s.top() << endl;
    cout << "size of the stack: " << s.size() << endl;
    s.pop();
    cout << "top element: " << s.top() << endl;
    cout << "size of the stack: " << s.size() << endl;
    cout << "empty or not: " << s.empty() << endl;
}