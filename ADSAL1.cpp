#include<iostream>
using namespace std;

int findZeros(int arr[] ,int size){
    int n=-1;  // zero index value
    int st=0, end=size-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
            if(arr[mid]==0){
                n=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        if (n==-1){
            return 0;
        }
        else 
        return size-n;
    }


int main()
{
    int arr[]={1,1,1,1,0,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Number are zeros in this array is:"<<findZeros(arr,size)<<endl;
    return 0;
}
