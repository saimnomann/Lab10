#include<stdio.h>
int rec(int arr[],int size);
int size;
int main(){
	int i;
	printf("Please enter the size of array ");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
rec(arr,0);
}
int rec(int arr[],int n){
	if(n==size-1){
		printf("%d",arr[n]);


	
}
else{
  	printf("%d ",arr[n]);
    return  rec(arr,n+1);

}
}
