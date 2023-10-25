// Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
using namespace std;

int main(){
    int a[6]={1,3,2,2,5,1};
    int n=6;
    int x=6;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==x) count++;
            }
        }
    }
    cout<<count;
}