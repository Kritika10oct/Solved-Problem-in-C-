#include<iostream>
using namespace std;

int BinaryToDecimal(int n){
    int x=1;
    int value=0;
    while(n>0){
        int q=n%10;
        value+=x*q;
        x*=2;
        int r=r/10;
    }
    return value;
}

int main(){
    int n;
    cin>>n;
    cout<<BinaryToDecimal(n)<<endl;
    return 0;
}
