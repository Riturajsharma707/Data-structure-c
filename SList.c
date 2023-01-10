/*
 Singly lisked list

  Author : RITU RAJ SHARMA
  Place	 : KJEI TRINITY ACCADEMY OF ENGINEERING, PUNE
  date	 : 25/12/2022

*/

#include <stdio.h>
#include <stdlib.h>

// Main Menu

int getchoice(int n)
{
	
	printf("\n1. For create\n2. For Insert \n3. For Display\n4. For Deletion \n5. For sorting\n0. For exit \n\n\t Choose the option : ");
	scanf("%d", &n);
	return n;
}

// sub menu

int subchoice(int m)
{
	printf("1. Insert at beggining\n2. Insert at end\n3. Insert at any position\n0. For Exit\n\n\t Enter your choice : ");
	scanf("%d", &m);
	return m;
}

// Delete Menu

int DelMenu(int d)
{
	printf("\n1. For Delete at beggining\n2. For Delete at End\n3. For Delete at desire location\n0. For Exit\n\n Enter your choice : ");
	scanf("%d", &d);

	return d;
}

// node

struct node
{
	int data;
	struct node *next;
};

// global variables area

int created = 0;
struct node *head, *newnode, *temp;

// create linked list

struct node Create()
{
	if (created != 0)
	{
		printf("\nLinked list is already created !");
	}
	else
	{
		newnode = (struct node *)malloc(sizeof(struct node));

		printf("\nEnter data :");
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		created++;
		head = newnode;
		printf("\nLinked list is successfully created.");
	}
}

// insert at begining

struct node AtBeggining()
{
	if (created == 0)
	{
		printf("\nLinked list is not created !\n");
	}
	else
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("\nEnter data :");
		scanf("%d", &newnode->data);
		newnode->next = head;
		head = newnode;
		created++;
		printf("\nInsert at beggining is successfully inserted.\n");
	}
}

// inset at ending

struct node AtEnd()
{
	if (created == 0)
	{
		printf("\nLinked list is not created !\n");
	}
	else
	{
		temp = head;
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter data :");
		scanf("%d", &newnode->data);

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
		created++;
		printf("\nInsert at the end is successfully inserted.");
	}
}

// for displaying

void Display()
{
	temp = head;
	if (created == 0)
	{
		printf("\nLinked list is not created!\n");
	}
	else
	{
		while (temp != NULL)
		{
			printf(" %d ", temp->data);
			temp = temp->next;
		}
	}
}

// Delete at begining

void DeleteAtBeg()
{
	if (created != 0)
	{
		temp = head;
		head = head->next;
		free(temp);

		printf("\n1st node is sucessfully deleted.\n");
	}
	else
	{
		printf("\n List is Empty!\n");		
	}
}

// Delete at end

void DeleteAtEnd()
{
	if (created == 0)
	{
		printf("\nList is Empty!\n");
	}
	else
	{
		temp = head;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;

		printf("\n End node is successfully deleted \n");
	}
}

//Main Function 

int main()
{
	int ch, sh, d; // ch main Menu, sh Sub Menu, d Delete menu

	printf("\n-: Welcome to Singly linked list :-");
	// sleep(2);
	// printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bLet's start \n");
	while (1)
	{
		ch = getchoice(ch);
		switch (ch)
		{
		case 0:
			printf("\n<---Thank you--->\n");
			exit(1);
		case 1:
			Create();
			break;

		case 2:
			
			if (created == 0)
			{
				printf("\nList is not created !\n");
			}
			else
			{
				sh = subchoice(sh);
				switch (sh)
				{
				case 0:
					printf("\n<---Thank you--->");
					exit(1);
				case 1:
					// printf("Inset at begining is coming soon");
					AtBeggining();

					break;
				case 2:

					// printf("Insert at end is coming soon");
					AtEnd();
					break;
				case 3:

					printf("Insert at any position is coming soon");
					break;
				default:
					printf("Invilid Input!");

					
				}
			}
			break;
		case 3:
			// printf("This Display function is coming soon");
			Display();
			break;
		case 4:
			// printf("This Deletion function is coming soon");
			d = DelMenu(d);
			switch (d)
			{
			case 0:
				printf("\n<---Thank you--->");
				exit(1);

			case 1:
				// printf("Delete at begginig is coming soon...");
				DeleteAtBeg();
				break;
			case 2:
				// printf("Delete at end is coming soon...");
				DeleteAtEnd();
				break;
			case 3:
				printf("Delete at desire location is coming soon...");
				break;
			default:
				printf("Wrong Input!");
			}
			
		default:
			printf("Invilid Input!");
		}
	}
	return 0;
}


/*
 Singly lisked list

  Author : RITU RAJ SHARMA
  Place	 : KJEI TRINITY ACCADEMY OF ENGINEERING, PUNE
  date	 : 25/12/2022

*/
