#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,num;
    int a[10];
    printf("Enter the length of array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the no. to searched:");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(a[i]==num){
            printf("The key is found at index %d\n",i);
            printf("No. of comparison is %d",i+1);
        }
    }
}