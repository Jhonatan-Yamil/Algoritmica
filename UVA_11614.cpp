#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int rows;
    int warriors;
    cin>>n;
    for(int i =0; i<n;i++){
        cin>>warriors; //Imrpime esto con el resultado por el for, falta arreglar eso.
        rows=((-1+sqrt(1+8*warriors))/2);
        cout<<rows<<endl; 
    }
}