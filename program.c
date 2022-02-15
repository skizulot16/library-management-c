#include <stdio.h>
#include <string.h>
#include <windows.h>
struct library_struc
{
	char bookname[50];
	char author[50];
	char genre[10];
	int pages,edition;
	int srno;
	char language[10];
	int recm_age;
	float price;
};
void add_book();
void delete_book();
void update_book();
void list_author();
void list_genre();
void view_books();

struct library_struc lib_var[1000];
int i = 0;

void main()
{
	int choice, count = 1;
	while (count == 1)
	{	system("cls");
		printf("Enter The Task that you want to perform\n");
		printf("1. Add Book Details\n");
		printf("2. Delete the Book Details\n");
		printf("3. Update the Book Details\n");
		printf("4. List all books of given author\n");
		printf("5. List all books of given Genre\n");
		printf("6. View all books\n");
		printf("7. To Exit\n");
		printf("Enter your choice from 1 to 7\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			add_book();
			break;
		case 2:
			delete_book();
			break;
		case 3:
			update_book();
			break;
		case 4:
			list_author();
			break;
		case 5:
			list_genre();
			break;
		case 6:
			view_books();
			break;
		case 7:
			exit(0);
			break;
		}
	}
}
void add_book()
{
	system("cls");
	printf("Book name=");
	fflush(stdin);
	gets(lib_var[i].bookname);
	printf("Author=");
	fflush(stdin);
	gets(lib_var[i].author);
	printf("Pages=");
	scanf("%d", &lib_var[i].pages);
	printf("Price=");
	scanf("%f",&lib_var[i].price);
	printf("edition=");
	scanf("%d",&lib_var[i].edition);
	printf("Genre=");
	fflush(stdin);
	gets(lib_var[i].genre);
	printf("Book Recommended age=");
	scanf("%d", &lib_var[i].recm_age);
	printf("Book language=");
	fflush(stdin);
	gets(lib_var[i].language);
	lib_var[i].srno = i + 1;
	i++;
}
void delete_book()
{
}
void update_book()
{
	char n_book[50];
	float n_price;
	int n_edition,j,ch,temp=0,k;
	system("cls");
	printf("enter the book's name which you want to update: ");
	fflush(stdin);
	gets(n_book);
	for(j=0;j<i;j++)
	{
		if(strcmpi(lib_var[j].bookname,n_book)==0)
		{
			temp=1;
			k=j;
		}
	}
	if(temp==1)
	{
		
		printf("press 1 to update book's price.\n");
		printf("press 2 to update book's edition.\n");
		
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter new price: ");
				scanf("%f",&n_price);
				lib_var[k].price=n_price;
				break;
				
			case 2:
				printf("enter updated edition: ");
				scanf("%d",&n_edition);
				lib_var[k].edition=n_edition;
				break;
				
			default:
				printf("press only 1 or 2.");
		}	
	}
	else
	{
		printf("book is not found\n");
		sleep(2);
	}
	
}
void list_author()
{
	system("cls");
	char aname[50];
	printf("enter author name to search books=");
	fflush(stdin);
	gets(aname);
	int i=0;
	if(strcmp(aname,lib_var[i].author)==0)
	{
		printf("books of author=%s\n",lib_var[i].bookname);
	}
	else
	{
		printf("No books available of this author\n");
	}
	i++;
}
void list_genre()
{
}
void view_books()
{
	system("cls");
	int j=0;
	//printf("BOOK NAME\t\t\tBOOK AUTHOR\t\t\tPAGES\t\t\tPRICE\t\t\tEDITION\t\t\tGENRE\t\t\tLANGUAGE\t\t\tAGE\n");
	for(j=0;j<i;j++)
	{
		//printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\t\t\t%d\t\t\t%s\t\t\t%s\t\t\t%d+\n",lib_var[j].bookname,lib_var[j].author,lib_var[j].pages,lib_var[j].price,lib_var[j].edition,lib_var[j].genre,lib_var[j].language,lib_var[j].recm_age);
		printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
		printf(" BOOK NAME: %s \n BOOK'S AUTHOR NAME: %s \n PAGES: %d \n",lib_var[j].bookname,lib_var[j].author,lib_var[j].pages);
		printf(" PRICE: %.2f \n EDITION: %d \n GENRE: %s \n LANGUAGE: %s \n AGE: %d",lib_var[j].price,lib_var[j].edition,lib_var[j].genre,lib_var[j].language,lib_var[j].recm_age);
	}
	fflush(stdin);
	getchar();
}
