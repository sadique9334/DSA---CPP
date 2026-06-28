#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("sadique");
    q.push("anwar");
    q.push("ayesha");
    q.push("aimann");

    cout<<"1st element = "<<q.front()<<endl;
    cout<<"last element = "<<q.back()<<endl;

    q.pop();
    cout<<"1st element = "<<q.front()<<endl;
    cout<<"last element = "<<q.back()<<endl;


}
