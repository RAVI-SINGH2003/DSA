#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("ravi");
    s.push("singh");
    s.push("hello");
    cout<<"Top element : "<<s.top()<<endl;
    cout<<"stack size : "<<s.size()<<endl;

    s.pop();
    cout<<"Top element after pop : "<<s.top()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;


}
