#include<iostream>
using namespace std;
int main()
{
int n;
float q,y,result;
cin>>n;
for(int i=0; i<n;i++){ 
    cin>>q>>y;
    result=q*y+result;
}
cout<<result;
}