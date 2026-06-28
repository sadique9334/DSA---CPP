#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="sadique";
    m[3]="anwar";
    m[8]="aimann";
    m[5]="ayesha";
    for(auto i:m){
        cout<<i.first<<endl;
    }
     cout<<endl;
    m.insert({9,"laptop"});
    for(auto i:m){
        cout<<i.first<<" - "<<i.second<<endl;
    }
    cout<<endl;
    m.erase(5);
 for(auto i:m){
        cout<<i.first<<" - "<<i.second<<endl;
    }
}
