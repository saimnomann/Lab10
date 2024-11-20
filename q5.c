#include<Stdio.h>
void bubbleSort(int arr[],int count);
int main(){
	int count;
	printf("Please enter the size of array");
	scanf("%d",&count);
	int arr[count];
for(int i=0;i<count;i++){
	printf("Enter Element at %d position: ",i+1);scanf("%d",&arr[i]);
}	
bubbleSort(arr,count);
printf("Sorted Array:\n");
for(int i=0;i<count;i++){
	printf("%d ",arr[i]);
}
}
void bubbleSort(int arr[],int count){
	int temp[count],i;
	if(count==1){
		return;}
	for(i=0;i<count-1;i++){
	if(arr[i]>arr[i+1]){
	temp[i]=arr[i+1];
	arr[i+1]=arr[i];
	arr[i]=temp[i];
}}
	 bubbleSort(arr,count-1);
}
