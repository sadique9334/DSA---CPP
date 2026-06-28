#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);

    cout<<"finding 5 - > "<<binary_search(v.begin(),v.end(),5)<<endl;

    cout<<"lower_bound= "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"upper_bound= "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    int a=10,b=20;
    swap(a,b);
    cout<<"swapped  "<<"a = "<<a<<" b = "<<b<<endl;
    string name="sadique";
    reverse(name.begin(),name.end());
    cout<<"reversed string = "<<name<<endl;
     reverse(name.begin(),name.end());
     cout<<"reversed string = "<<name<<endl;

    rotate(name.begin(),name.begin()+3,name.end());
    cout<<"rotated name = "<<name<<endl;
}
