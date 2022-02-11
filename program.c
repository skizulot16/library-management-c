#include <stdio.h>
#include <string.h>
struct library_struc
{
	char bookname[50];
	char author[50];
	char genre[10];
	int pages;
	int srno;
	char language[10];
	int recm_age;
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
	{
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

	printf("Book name=");
	fflush(stdin);
	gets(lib_var[i].bookname);
	printf("Author=");
	fflush(stdin);
	gets(lib_var[i].author);
	printf("Pages=");
	scanf("%d", &lib_var[i].pages);
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
}
void list_author()
{
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
}
