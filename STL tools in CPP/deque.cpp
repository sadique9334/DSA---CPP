#include<iostream>
#include<deque>
using namespace std;
int main(){

deque<int>d;
d.push_back(1);
cout<<"size = "<<d.size()<<endl;
d.push_back(2);
cout<<"size = "<<d.size()<<endl;
d.push_back(3);
cout<<"size = "<<d.size()<<endl;
d.push_front(5);
cout<<"size = "<<d.size()<<endl;
for(int i:d)
cout<<i<<" ";
cout<<"empty or not : "<<d.empty()<<endl;

cout<<"before erase, size= "<<d.size()<<endl;
d.erase(d.begin());
cout<<"after erase, size= "<<d.size()<<endl;

for(int i:d){
cout<<i<<" ";
cout<<"size of "<<i<<"="<<d.size()<<endl;
}




}
