#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<"size = "<<s.size()<<endl;
    cout<<"top element = "<<s.top()<<endl;
    s.pop();
    cout<<"top element = "<<s.top()<<endl;
    cout<<"size = "<<s.size()<<endl;

    cout<<"empty or not = "<<s.empty();
}
