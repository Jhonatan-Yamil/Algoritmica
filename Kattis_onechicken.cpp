#include<iostream>
using namespace std;
int main()
{
int N,M;
cin>>N>>M;
int s=abs(N-M);
if(N<M){
    if(s!=1){
        cout<<"Dr. Chaz will have " << s << " pieces of chicken left over!";
    } else{
        cout<<"Dr. Chaz will have " << s << " piece of chicken left over!";
    }
}else if(N>M){
    if(s!=1){
        cout<<"Dr. Chaz needs " << s << " more pieces of chicken!";
    } else{
        cout<<"Dr. Chaz needs " << s << " more piece of chicken!";
    }
}
}