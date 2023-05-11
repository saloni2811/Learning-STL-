#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,5> arr={1,2,3,4,5};
    int size = arr.size();
    cout<<"Size of the array: "<<size<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Empty or not: "<<arr.empty()<<endl;
    cout<<"Element ar 3rd index: "<<arr.at(3)<<endl;

    cout<<"Element at front: "<<arr.front()<<endl;
    cout<<"Element at back: "<<arr.back();


}