#include<stdio.h>
#include<String.h>
struct Package{
	char package_Name[20];
	char destination [10];
	int duration;
	int cost;
	int seat_Available;
};
void DisplayPackage(struct Package package[]);
void bookPackage(struct Package package[],char name[20]);
int main(){
char name[20];
int count;
struct Package package [4]={{"Island_Escape","Maldives",7,2500,4},{"Northern_Area","Skardu",4,1200,3},{"European_Tour","Italy",15,2000,0},{"Desert_Adventure","Dubai",15,4000,14}
};

DisplayPackage(package);
printf("Please select the Package Name you want to book ");
scanf("%s",name);
bookPackage(package,name);
}
void DisplayPackage(struct Package package[]){
	for(int i=0;i<4;i++){
		if(package[i].seat_Available>0){
			printf("Package %d:\n{\nPackage Name: %s\nDestination: %s\nDuration: %d\nCost: %d\nSeat_Available: %d\n}\n",i+1,package[i].package_Name,package[i].destination,package[i].duration,package[i].cost,package[i].seat_Available);
		}
	}
}

void bookPackage(struct Package package[],char name[20]){
	for(int i=0;i<4;i++){
	if(strcmp(package[i].package_Name,name)==0){
		package[i].seat_Available--;
		printf("Your seat is book");
		break;
	}
	}
}
