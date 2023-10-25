#include <iostream>
using namespace std;

int main(){
    int arr[9]={1,2,3,0,8,0,6,0,5};
    int n=8;
    int j=0;
    for(int i=0;i<=8;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<=8;i++){
        cout<<arr[i]<<" ";
    }
}