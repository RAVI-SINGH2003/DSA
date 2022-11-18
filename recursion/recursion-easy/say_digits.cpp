#include<iostream>
using namespace std;
void solve(int n,string mapping[])
{
    if(n/10==0)
     {
         cout<<mapping[n]<<" ";
         return ;
     }
    solve(n/10,mapping);
    int ld= n%10;
    cout<<mapping[ld]<<" ";
}
int main()
{
    int n;
    cin>>n;
    string mapping[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    solve(n,mapping);
}