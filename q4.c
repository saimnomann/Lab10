#include<Stdio.h>
#include<String.h>
struct Book{
	char title[20];
	char author[20];
int publication_year;
	int price;
};
void displayBooks(struct Book book[],int count);
void SearchBook(struct Book book[],int count);
void listBook(struct Book book[],int count);

int count;
int main(){
printf("Please enter the count of book ");
scanf("%d",&count);
struct Book book[count];
for(int i=0;i<count;i++){
	printf("PLease enter Book %d title ",i+1);scanf("%s",book[i].title);
	printf("Please enter Book %d Author ",i+1);scanf("%s",book[i].author);
	printf("Please enter Book %d Publication Date ",i+1);scanf("%d",&book[i].publication_year);
	printf("Please enter Book %d Price ",i+1);scanf("%d",&book[i].price);
}
displayBooks(book,count);
SearchBook(book,count);
listBook(book,count);
}
void displayBooks(struct Book book[],int count){
	for(int i=0;i<count;i++){
		printf("Book %d Title: %s\n",i+1,book[i].title);
		printf("Book %d Author: %s\n",i+1,book[i].author);
		printf("Book %d Publication Date: %d\n",i+1,book[i].publication_year);
		printf("Book %d Price: %d\n",i+1,book[i].price);
	}
}
void SearchBook(struct Book book[],int count){
	char name[20];
	int temp=0;
	printf("Please enter the title of the book ");scanf("%s",name);
	for(int i=0;i<count;i++){
		if(strcmp(name,book[i].title)==0){
		printf("Book %d Title: %s\n",i+1,book[i].title);
		printf("Book %d Author: %s\n",i+1,book[i].author);
		printf("Book %d Publication Date: %d\n",i+1,book[i].publication_year);
		printf("Book %d Price: %d\n",i+1,book[i].price);
		temp=1;
		break;
		}
		else{
			temp=0;
		}}
		if(temp==0){
			printf("No Book Found");
		}
}
void listBook(struct Book book[],int count){
	char name[20];
	int i,temp=0;
	printf("Enter Author Name ");
	scanf("%s",name);
		for(int i=0;i<count;i++){
		if(strcmp(name,book[i].author)==0){
		printf("Book %d Title: %s\n",i+1,book[i].title);
		printf("Book %d Author: %s\n",i+1,book[i].author);
		printf("Book %d Publication Date: %d\n",i+1,book[i].publication_year);
		printf("Book %d Price: %d\n",i+1,book[i].price);
		temp=1;
		break;
		}
		else{
			temp=0;
		}}
		if(temp==0){
			printf("No Book Found");
		}
}