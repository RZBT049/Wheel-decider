/********************************************************************************
* Programmer: Rize Zheng, Kaung Myat Lwin, Jack Smither							*
* Class: CptS 121																*											
* Date: 2/18/2023																*
*																				*
*																				*
* Description: allow the user to import amount of list and same them in a file 	*
*				then takes file value transport into a arraylist. And use       *
*				rand() cmd to give user the random choice that user imported    *
*********************************************************************************/

#include "Header.h"

int main(void)
{
	FILE* input = NULL, * Output = NULL, * out = NULL;

	input = fopen("output.txt", "w");

	int list = 0, fin = 0;
	char* std;	char stds[50];
	printf("How many list you need for the wheel: \n");
	scanf("%d", &list);
	for (fin = 0; fin <= list; ++fin) //use list to loop amount list, string value
	{
		displayString(input);
		system("cls"); //clears the cmd page 
	}

	fclose(input);

	int choice = 0;
	srand((unsigned)time(NULL));

	choice = random_number(list); //random number

	Output = fopen("output.txt", "r");
	out = fopen("output.txt", "r");
	

	char stri[50], * arrayOfWards[100];
	int wordcount = 0, i = 0, count = 0, listing = 1;
	char star[50];


	while(!feof(out)) //prints out all the file value from output.txt
	{
		fscanf(out, "%s", star);
		printf("%d: %s\n", listing, star);
		count = 1 + count;
		
		if (count == list)
		{
			break;
		}
		listing = 1 + listing;
	}
	printf("\n");
	printf("\n");

	if (Output != NULL) //arraylist that uses the random number to find the random choice is made from the file
	{
		while (!feof(Output))
		{
			if (wordcount == choice)
			{
				wordcount = choice;
				arrayOfWards[wordcount] = stri;
				printf("<------------------------>\n");
				printf("Your random choice is: %s \n", arrayOfWards[i]);
			
				break;
			}
			fscanf(Output, "%s", stri);
			arrayOfWards[wordcount] = stri;

			wordcount++;
		}
		puts("");
	}
	else
	{
		puts("cant open the file!");
	}
	fclose(Output);

	return 0;
}