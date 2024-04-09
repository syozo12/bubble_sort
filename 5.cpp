#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
          swap(arr[i],arr[i+1]);
          i++;  
        }
    }
    bool flag=true;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            bool flag=false;
            break;
        }
    }
    if(flag) cout<<"it is almost sorted";
    else cout<<"it is not almost sorted";
    return 0;
}