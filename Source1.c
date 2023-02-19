/********************************************************************************
* Programmer: Rize Zheng, Kaung Myat Lwin, Jack Smither							*
* Class: CptS 121																*
* Date: 2/18/2022																*
*																				*
*																				*
* Description: allow the user to import amount of list and same them in a file 	*
*				then takes file value transport into a arraylist. And use       *
*				rand() cmd to give user the random choice that user imported    *
*********************************************************************************/

#include "Header.h"

/*************************************************************
* Function: displayString()                                 *
* Date Created: 2/18/23                                     *
* Date Last Modified:2/18/23								*
*															*
* Description: It takes in user string and put it into		*
*				output.txt									*
* Input parameters: Create any string that user inputs      *
*************************************************************/
void displayString(FILE* out)
{
	char str[50];
	printf("-The item in the list: \n"); 
	printf("----->\n");
	fgets(str, sizeof(str), stdin);	//allows user to input strings
	fprintf(out, " %s", str);
	return str; 
}

/*************************************************************
* Function: random_number()                                 *
* Date Created: 2/18/23                                     *
* Date Last Modified:2/18/23								*
*															*
* Description: It generates a random number					*
*				to choose the string from the list			*
* Input parameters: random number from 1 - list that user	*
*					decided to make							*
*************************************************************/
int random_number(int list)
{
	return ((rand() % list) + 1);
}
