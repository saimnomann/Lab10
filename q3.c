#include<Stdio.h>
float max_temp=100.0;
void checkTemp(float temp);
static count=0;
int main(){
	float temp;
	int ans;
	do{
	printf("Please enter the temperature ");
	scanf("%f",&temp);
	checkTemp(temp);
	printf("Press 1 to continue and 0 to exit ");
	scanf("%d",&ans);
	}
	while(ans);
	printf("The temperature exceeded %d times ",count);
}
void checkTemp(float temp){
	if(temp>max_temp){
		count++;
		printf("The temperature has exceeded the limit\n ");
	}
}


