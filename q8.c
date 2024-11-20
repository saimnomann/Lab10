#include<stdio.h>
int linearSearch(int arr[],int count,int target,int index);
int main(){
	int count,target,index,i;
	printf("Please enter the size of array ");
	scanf("%d",&count);
	int arr[count];
	for(i=0;i<count;i++){
		printf("Please enter Element %d: ",i+1);scanf("%d",&arr[i]);
	}
	printf("Please enter the target element ");
	scanf("%d",&target);
	printf("Please enter the current index ");
	scanf("%d",&index);
	int res=linearSearch(arr,count,target,index);
		printf("Target Found");
	}
	else{
		printf("Array Exhausted");
	}
	
}
int linearSearch(int arr[],int count,int target,int index){
	 if(index > count){
		return -1;
	}
else if(arr[index]==target ){
		return 1;
	}
	else {
	return linearSearch(arr,count,target,index+1);
	}
}