#include<iostream>
using namespace std;
int BinarySearch(int array[],int n, int key){
    int start=0;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
}
int main(){
    int n;
    cin>>n;
     int array[n];
     for (int i = 0; i < n; i++)
     {
         cin>>array[i];
     }

     int key;
     cin>>key;
    cout<<BinarySearch(array,n,key)<<endl;
     
    return 0;
}
