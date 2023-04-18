#include<iostream>
using namespace std;
int main()
{
int G,S,C;
cin>>G>>S>>C;
int total=3*G+2*S+C;
if(total >=8){
    cout<<"Province or Gold";
}else if (total>=6){
    cout<<"Duchy or Gold";
}else if(total>=5){
    cout<<"Duchy or Silver";
}else if(total>=3){
    cout<<"Estate or Silver";
}else if(total>=2){
    cout<<"Estate or Copper";
}else{
    cout<<"Copper";
}
}