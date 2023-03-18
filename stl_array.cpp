#include<iostream>
#include<array>
using namespace std;
int main(){
    int bascic[7]={1,2,3,4,5,6,7};//basic array
    array<int,8>a ={1,2,3,4,5,6,7,8};//stl array
    int size=a.size();//size of array
    for(int i=0; i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 7th Index: "<<a.at(7)<<endl;
    cout<<"Empty or not:  "<<a.empty()<<endl;
    cout<<"First element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
      
}