#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_LEN 7
#define NAME_LEN 10

typedef struct
{
	char id[ID_LEN];
	char name[NAME_LEN];
	int math;
	int eng;
}STUDENT;

void print_menu();
void show(STUDENT ** list, int len);
void search(STUDENT ** list, int len);
void add(STUDENT ** list, int len);

int main()
{
	int num=0,i=0,menu=0;
	printf("How many students? ");// choose the student's number
	scanf("%d", &num);

	STUDENT** list = NULL;
	list = (STUDENT**)malloc(num*sizeof(STUDENT*));
	for(i=0;i<num;i++)
	{
		*(list+i) = (STUDENT*)malloc(sizeof(STUDENT));

	}
	for(i=0;i<num;i++)//input the information of student
	{
		printf("Enter data for student no.%d\n", i+1);
		printf("ID: ");
		scanf("%s", (*(list+i))->id);
		printf("Name: ");
		scanf("%s", (*(list+i))->name);
		printf("Math score: ");
		scanf("%d", &(*(list+i))->math);
		printf("English score: ");
		scanf("%d", &(*(list+i))->eng);
		printf("\n");
	}

	while(1)
	{
		print_menu();//select menu
		scanf("%d", &menu);
		switch(menu)
		{
			case 1: //show the student list
				show(list,num);
				break;
			case 2:// Add the student
				list = (STUDENT **)realloc(list, (num+1)*sizeof(STUDENT*));
				*(list+num) =(STUDENT *)malloc(sizeof(STUDENT));
				num++;
				add(list,num);
				show(list, num);
				break;
			case 3://search the student
				search(list, num);
				break;
			case 4://exit and clear the program 
				for(i=0;i<num;i++)
				{
					free(*(list+i));
	            }
				free(list);
				return 0;
		}
    }
	return 0;
}
void print_menu() // select menu
{
	printf("<Select menu>\n " );
	printf("Press 1 to 'SHOW' the scores.\n " );
	printf("Press 2 to 'ADD' a new student.\n " );
	printf("Press 3 to 'SEARCH' a student\n " );
	printf("Press 4 to 'EXIT'\n " );
}
void show(STUDENT ** list, int len)//show the student's list
{
	int i=0;
	double average = 0 ;
	printf("-----------------------------------------------------------------\n");
	printf("STUDENT ID\tNAME\tMATH SCORE\tENGLISH SCORE\tAVERAGE SCORE\n");
	for(i=0;i<len;i++)
	{
		average = (double)(((*(list+i))->math + (*(list+i))->eng) /2);
		printf("%s\t%s\t%d\t\t%d\t\t%.1f\n", (*(list+i))->id,(*(list+i))->name,(*(list+i))->math,(*(list+i))->eng,average);
		
	}
	printf("-----------------------------------------------------------------\n");
}
void search(STUDENT ** list, int len)//search the student's list
{
	int i = 0;
	char query[ID_LEN]={0,};
	printf("Enter student ID: ");
	scanf("%s", query);
	for(i=0;i<len;i++)
	{
		if(strcmp((*(list+i))->id, query) == 0)//compare the original student's id and new one. if it is same, do the next paragraph.
		{
			printf("ID : %s\n", (*(list+i))->id);
			printf("Name: %s\n", (*(list+i))->name);
		    printf("Math score: %d\n", (*(list+i))->math);
		    printf("English score: %d\n", (*(list+i))->eng);
		}

	}
}
void add(STUDENT ** list, int len)//add a new student's information.
{
	printf("Enter data for new student.\n");
	printf("ID: ");
	scanf("%s", (*(list+len-1))->id);
	printf("Name: ");
	scanf("%s", (*(list+len-1))->name);
	printf("Math score: ");
	scanf("%d", &(*(list+len-1))->math);
	printf("English score: ");
	scanf("%d", &(*(list+len-1))->eng);
	printf("\n");
}
