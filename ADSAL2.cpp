#include<iostream>
using namespace std;


void mergeArr(int arr[],int st,int mid, int end)
{
    int temp[100];
    int i=st, j=mid+1,k=0;
    
    while(i<=mid&&j<=end){
        if(arr[i]==0){
            temp[k++]=arr[j++];
        }
        else if(arr[j]==0){
           temp[k++]=arr[i++]; 
        }
        else if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j];
        }
    }
    while(i<=mid) temp[k++]=arr[i++];
    while(j<=end) temp[k++]=arr[j++]; 
    
    for(int t=0;t<k;t++){
        arr[st+t]=temp[t];
    }
}


void mergeSort(int arr[],int st,int end){
    
    if(st<end){
        int mid=st+(end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        mergeArr(arr,st,mid,end);
    }
}

int main(){
    int arr[]={1,0,4,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    
    cout<<"Array after moving all zeroes at the end: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}








