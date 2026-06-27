#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(5);
    l.push_back(4);
    l.push_front(1);
    for(int i:l)
    cout<<i<<" "<<endl;
    list<int>m(5,99);
    for(int i:m)
    cout<<i<<" ";
    cout<<endl;
    cout<<"size of l = "<<sizeof(l)<<endl;
    cout<<"size of l = "<<sizeof(m)<<endl;
    cout<<"capacity of l = "<<l.size()<<endl;
    cout<<"capacity of m = "<<m.size()<<endl;
    m.erase(m.begin());
    for(int i:m)
    cout<<i<<" ";
    cout<<"capacity of m = "<<m.size()<<endl;
}
