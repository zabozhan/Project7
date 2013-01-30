/*
 *		main.c
 *
 *		Database of CD.
 *
 *
 *		by Aleksey Zabozhan, 2013
 *
 */

 #include <stdio.h>

//function that displays the menu
 void display_menu(){

 	 char menu_number;
 	
 	 printf("\nWelcome to the CD database.\n");
 	 printf("1. File: Create a new list\n");
 	 printf("2.       Open an existing list\n");
 	 printf("3.       Save the list\n");
 	 printf("4.       Save the list with a new name\n");
 	 printf("5.       Append list to another file\n");
 	 printf("6. Edit: Create a new record\n");
 	 printf("7. View: Display a specific record\n");
 	 printf("8.       Display a specific record\n");
 	 printf("9. Exit\n");

 	 fpurge(stdin);
 	 menu_number = getchar();

 	 switch (menu_number){
 	 	case '1': printf("File: Create a new list\n");
 	 	 break;
 	 	case '2': printf("Open an existing list\n");
 	 	 break;
 	 	default: printf("Error\n");
 	 	 break;   
 	 }
   
 };

 struct cd{
 	char title[31];
 	char artist[31];
 	int records;
 	int type;
 	float price;
 };

 typedef struct cd cd_t;

 int main(int argc, char *argv[]){

 	if(argv[1]){printf("There is an argument\n");}
 	else printf("No arguments!\n");
 	
 	display_menu();

 	return 0;
 }