#include<stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
void week(struct Date date1);
void leapYear(struct Date date1);


int main(){
	struct Date date1;
	printf("Please enter Day ");scanf("%d",&date1.day);
	printf("Please enter Month ");scanf("%d",&date1.month);
	printf("Please enter Year ");scanf("%d",&date1.year);
	week(date1);
	leapYear(date1);
}
void week(struct Date date1){
	int week=date1.day /7;
	if(!(date1.day %7 ==0))week++;
	printf("Week Number:%d of %d month\n",week,date1.month);}
	
void leapYear(struct Date date1){
	if(date1.year % 4==0){
		if(date1.year % 100 ==0){
			if(date1.year %400 ==0){
				printf("It is leap year");
			}
	else{
		printf("It is not leap year");
}}}
else{
	printf("It is not a leap year");
}}