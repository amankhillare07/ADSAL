#include<iostream>
using namespace std;


int trailingZeros(int x){
    int count=0;
    while(x>0){
        x/=5;
        count+=x;
    }
    return count;
    
}


int binarySearch(int n){
    int st=0,end=5*n,ans=-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        int tz=trailingZeros(mid);
        if(tz>=n){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}



int main(){
    int n;
    cout<<"Enter the number of training zeros: ";
    cin>>n;
    int result=binarySearch(n);
    cout<<result<<endl;
    return 0;
    

}
