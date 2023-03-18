#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ar= {1,2,1,1,3,4,5,8,1,1,4,4,4,5,6,6,6};
    int n= ar.size();
    sort(ar,ar+n);
    for(int i:ar){
        cout<<i<<" ";
    }
    auto itr_lower1=lower_bound(ar.begin(),ar.end(),1)-ar.begin();
    auto itr_upper1=upper_bound(ar.begin(),ar.end(),1)-ar.begin();

    auto itr_lower2=lower_bound(ar.begin(),ar.end(),2)-ar.begin();
    auto itr_upper2=upper_bound(ar.begin(),ar.end(),2)-ar.begin();

    auto itr_lower3=lower_bound(ar.begin(),ar.end(),3)-ar.begin();
    auto itr_upper3=upper_bound(ar.begin(),ar.end(),3)-ar.begin();

    auto itr_lower4=lower_bound(ar.begin(),ar.end(),4)-ar.begin();
    auto itr_upper4=upper_bound(ar.begin(),ar.end(),4)-ar.begin();

    auto itr_lower5=lower_bound(ar.begin(),ar.end(),5)-ar.begin();
    auto itr_upper5=upper_bound(ar.begin(),ar.end(),5)-ar.begin();

    auto itr_lower6=lower_bound(ar.begin(),ar.end(),6)-ar.begin();
    auto itr_upper6=upper_bound(ar.begin(),ar.end(),6)-ar.begin();

    auto itr_lower7=lower_bound(ar.begin(),ar.end(),8)-ar.begin();
    auto itr_upper7=upper_bound(ar.begin(),ar.end(),8)-ar.begin();

    auto a = itr_upper1-itr_lower1;
    auto b = itr_upper2-itr_lower2;
    auto c = itr_upper3-itr_lower3;
    auto d = itr_upper4-itr_lower4;
    auto e = itr_upper5-itr_lower5;
    auto f = itr_upper6-itr_lower6;
    auto g = itr_upper7-itr_lower7;
cout<<"Maximum iteration: "<<max(a,(max(b,(max(c,max(d,max(e,max(f,g))))))));


}