#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    cout<<" capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;

     v.push_back(2);
    cout<<" capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;

     v.push_back(3);
    cout<<" capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;

     v.push_back(4);
    cout<<" capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;

    v.push_back(5);
    cout<<" capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;

    cout<<"front : "<<v.front()<<endl;
    cout<<"back : "<<v.back()<<endl;

    cout<<"element at 2nd idx = "<<v.at(2)<<endl;
    v.pop_back();
     cout<<"back : "<<v.back()<<endl;
}
