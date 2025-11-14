#include<stdio.h>
int main(){
    int n,i,arr[10];
    printf("Enter The Size of Array = ");
    scanf("%d",&n);
    printf("Enter the Array Value = ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Linear Traversal With Array = ");
    for(i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}