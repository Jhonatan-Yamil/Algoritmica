#include<iostream>
using namespace std;
int main()
{
    int t, L,W,H;
    cin>>t;
    for(int i=1;i<t+1;i++){
        cin>>L>>W>>H;
        cout<<"Case "<<i<<": ";
        if(L<=20 && W<=20 && H<=20){
            cout<<"good\n";
        }else{
            cout<<"bad\n";
        }
    }
}