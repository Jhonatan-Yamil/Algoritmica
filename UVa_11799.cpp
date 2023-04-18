#include<iostream>
using namespace std;
int main()
{
int T,N,V;
cin>>T;
for(int i=1;i<T+1;i++)
{
    cin>>N;
    int vm=0;
    for(int j=0;j<N;j++)
    {
    cin>>V;
    if(V>vm){
        vm=V;
    }
    }
    cout<<"Case "<<i<<": ";
    cout<<vm<<endl;
}
}