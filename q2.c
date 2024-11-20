#include<stdio.h>
#include<math.h>
struct Point{
	int lower_limit_x;
	int lower_limit_y;
	int higher_limit_x;
	int high_limit_y;
	int x1,x2;
	int y1,y2;
};
int main(){
	struct Point point1;
	printf("Enter the lower limit of x ");
	scanf("%d",&point1.lower_limit_x);
	printf("Enter the higher limit of x ");
	scanf("%d",&point1.higher_limit_x);
	printf("Enter the lower limit of y ");
	scanf("%d",&point1.lower_limit_y);
	printf("Enter the higher limit of y ");
	scanf("%d",&point1.high_limit_y);
	printf("Enter x1 and x2 ");
	scanf("%d %d",&point1.x1,&point1.x2 );
	if((point1.x1>=point1.lower_limit_x && point1.x1<=point1.higher_limit_x)&&(point1.x2>=point1.lower_limit_x && point1.x2<=point1.higher_limit_x)){
	printf("Enter y1 and y2 ");
	scanf("%d %d",&point1.y1,&point1.y2);
	if((point1.y1>=point1.lower_limit_y && point1.y1<=point1.high_limit_y)&&(point1.y2>=point1.lower_limit_y && point1.y2<=point1.high_limit_y)){
		int res=(point1.x2-point1.x1)*(point1.x2-point1.x1) + (point1.y2-point1.y1)*(point1.y2-point1.y1);
		float ans=sqrt(res);
		printf("%f",ans);
}
	}
	else{
		printf("The point doesnot lie in the boundary");
	}
}