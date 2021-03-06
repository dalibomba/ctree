#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "tree.h"

void menu(){
	printf("\nACTIONS\n");
	printf("1\tPRINT TREE\n");
	printf("2\tINSERT\n");
	printf("3\tINSERT RAND\n");
	printf("4\tDELETE\n");
	printf("5\tPRINT (ASC)\n");
	printf("6\tPRINT (DESC)\n");
	printf("0\tQUIT PROGRAM\n");
	printf(">");
} 

int main(void){
	Node *root = 0;
	srand(time(0));

	int selection = 1;
	int _dataval;
	int count;
	while (selection){
		menu();
		scanf("%d",&selection);
		system("clear");
		switch (selection){
			default:
				printf("INPUT ERROR\n");
				break;
			case 0: 
				break;
			case 1: 
				printTree(root); 
				break;
			case 2: 
				printf("ENTER DATA VALUE:\n");
				scanf("%d",&_dataval);
				insert(&root,_dataval);
				break;
			case 3:
				printf("ENTER N:\n");
				scanf("%d",&count);
				for (int i=0; i<count; i++)
					insert(&root,rand()%100000);
				break;
			case 4:
				deleteTree(&root);
				break;
			case 5:
				printAscending(root);
				break;
			case 6:
				printDescending(root);
				break;
		}
	}
	deleteTree(&root);
	printf("EXITING..\n");

	return 0;
};

