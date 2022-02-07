#include<stdio.h>
void main()
{
	int choice;
	while (i = 1)
	{
		printf("The Task that you want to perform\n");
		printf("1. Add Book Details\n")
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
				Update_book();
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
