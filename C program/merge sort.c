#include<stdio.h>
void merge(int arr[],int temp[],int l,int r);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=0,r=n-1;
    int temp[n];
    merge(arr,temp,l,r);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

void merge(int arr[],int temp[],int l,int r){
    if(l>=r)
        return;
    int mid=l+(r-l)/2;
    merge(arr,temp,l,mid);
    merge(arr,temp,mid+1,r);
    // Merge the two sorted subarrays into temp
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    // Copy any remaining elements from either subarray
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k]=arr[j];
        j++;
        k++;
    }
    // Copy the merged elements back to the original array
    for(i=l;i<=r;i++){
        arr[i]=temp[i];
    }
}