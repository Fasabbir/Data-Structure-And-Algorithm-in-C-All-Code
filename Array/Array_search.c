#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Enter the Number of Elements = ");
    scanf("%d",&n);
    printf("Enter the Array Elements = ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are = ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    int value;
    printf("\nEnter the Value to be Searched = ");
    scanf("%d",&value);

    int position = -1;
    for(int i=0; i<5; i++){
        if(value == arr[i]){
            position = i+1;
            break;
        }
    }
    if(position == -1){
        printf("Item is Not Found!");
    }
    else{
        printf("Item is Found at %d Position",position);
    }
    return 0;
}