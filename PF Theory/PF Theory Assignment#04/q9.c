#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void add_book();
void display_book();
void book_auth();
void count_book();
void book_title();
void list_acc_order();

struct library{
	int book_number;
	char book_title[20];
	char author[20];
	int price;
} b[100];

int count;
int main(){
	int choice;
	while(1){
		printf("\n");
		printf("1:Enter the book information\n");
  		printf("2:Display book information\n");
  		printf("3:Display all books of author\n");
		printf("4:List title of specified book\n");
  		printf("5:List count of total books\n");
  		printf("6:List books by accession number\n");
  		printf("7:Exit\n");
  		printf("\nEnter your choice: ");
  		scanf("%d",&choice);
  		switch(choice){
			case 1:
    			add_book();
    			getch();
			    break;
			case 2:
    			display_book();
    			getch();
			    break;
			case 3:
				book_auth();
		    	getch();
	    		break;
			case 4:
	    		book_title();
    			getch();
    			break;
			case 5:
	    		count_book();
    			getch();
    			break;
			case 6:
	    		list_acc_order();
    			getch();
    			break;
			case 7:
    			exit(0);
		}
	}
}

void add_book(){
	if(count > 9){
		printf("\n no more space\n");
  		return;
	}
	printf("\nEnter the details of book\n");
	printf("Enter accession number of book: ");
	scanf("%d",&b[count].book_number);
	fflush(stdin);
	printf("Enter the book title: ");
	gets(b[count].book_title);
	fflush(stdin);
	printf("Enter the name of author: ");
	gets(b[count].author);
	fflush(stdin);
	printf("Enter the price of book: ");
	scanf("%d",&b[count].price);
	count++;
}

void display_book(){
	int i;
	printf("Currently %d books present in library:\n",count);
	for(i=0;i<count;i++){
		printf("\nAccession number: %d\n", b[i].book_number);
		printf("Book title: %s\n", b[i].book_title);
		printf("Name of author: %s\n", b[i].author);
		printf("Price of book: %d\n", b[i].price);
	}
}

void book_auth(){
	int i,cnt=0;
	char name[50];
	fflush(stdin);
	printf("\nEnter the name of author: ");
	fflush(stdin);
	gets(name);
	fflush(stdin);
	for(i=0;i<count;i++){
		if(strcmp(name,b[i].author)==0){
			cnt++;
			printf("\nAccession number: %d\n", b[i].book_number);
			printf("Book title: %s\n", b[i].book_title);
			printf("Name of author: %s\n", b[i].author);
			printf("Price of book: %d", b[i].price);
		}
	}
	if(cnt==0)
	printf("\nNo book by given author present in library.\n");
}

void book_title(){
	int i,cnt=0;
	int acc_number;
	printf("\nEnter the accession number of book:");
	scanf("%d", &acc_number);
	for(i=0;i<count;i++){
		if(b[i].book_number == acc_number){
			cnt++;
//			printf("\n %d\n%s\n%s\n%d",b[i].book_number,b[i].book_title,b[i].author,b[i].price);
			printf("\nAccession number: %d\n", b[i].book_number);
			printf("Book title: %s\n", b[i].book_title);
			printf("Name of author: %s\n", b[i].author);
			printf("Price of book: %d", b[i].price);
		}
	}
	if(cnt==0)
	printf("\nNo book by given accession number present in library.\n");
}

void count_book(){
	printf("\nTotal number of books in library: %d",count);
}
void list_acc_order(){
	int i,j,temp,step,size=count;
	char temp_name[50];
	for (step = 0; step < size - 1; ++step) {
    	for (i = 0; i < size - step - 1; ++i) {
			if (b[i].book_number > b[i+1].book_number){
				temp = b[i].book_number;
				b[i].book_number = b[i+1].book_number;
				b[i+1].book_number = temp;
				
				strcpy(temp_name, b[i].book_title);
				strcpy(b[i].book_title, b[i+1].book_title);
				strcpy(b[i+1].book_title,temp_name);
				
				strcpy(temp_name, b[i].author);
				strcpy(b[i].author, b[i+1].author);
				strcpy(b[i+1].author,temp_name);

				temp = b[i].price;
				b[i].price = b[i+1].price;
				b[i+1].price = temp;
			}
		}
	}
	printf("Sorted according to accession number:\n",count);
	for(i=0;i<count;i++){
		printf("\nAccession number: %d\n", b[i].book_number);
		printf("Book title: %s\n", b[i].book_title);
		printf("Name of author: %s\n", b[i].author);
		printf("Price of book: %d\n", b[i].price);
	}
}
