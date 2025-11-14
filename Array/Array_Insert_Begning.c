#include<stdio.h>
int main(){
int arr[10];
int n,new;
printf("Size of the Array = ");
scanf("%d",&n);
printf("Inser the Array = ");
for(int i=0; i<n; i++){
scanf("%d",&arr[i]);
}
printf("Print the Array = ");
for(int i=0; i<n; i++){
printf("%d ", arr[i]);
}
n = n+1;
printf("\nNew Item = ");
scanf("%d",&new);
for(int i=n; i>=0; i--){
arr[i+1] = arr[i];
}
arr[0]=new;
printf("\nPrint The Final Array = ");
for(int i=0; i<n; i++){
printf("%d ",arr[i]);
}
return 0;
}