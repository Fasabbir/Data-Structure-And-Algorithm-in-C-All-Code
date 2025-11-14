#include<stdio.h>
int main(){
    int n,i,arr[10],new_item;
    printf("Enter Size of the Array = ");
    scanf("%d",&n);
    printf("Enter The Value of an Array = ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Print the Array = ");
    for(i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    printf("Enter New Item = ");
    scanf("%d",&new_item);
    arr[n] = new_item;
    
    printf("Print End Insertion of An Array = ");
    for(i=0; i<=n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}