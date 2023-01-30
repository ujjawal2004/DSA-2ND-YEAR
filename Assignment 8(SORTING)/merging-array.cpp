#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2){
    int i=0,j=0,k=0;
  
  
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
    }
    sort(arr3,arr3+n1+n2);
}

int main()
{
    int arr1[]={8,6,8,4,2};
  
    int arr2[]={0,2,5,7,5};
  
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    merge(arr1,arr2,arr3,n1,n2);
    for(int i=0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";

    }
    return 0;
}
