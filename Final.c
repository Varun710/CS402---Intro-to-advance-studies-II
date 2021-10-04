#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#define MAX_SIZE 100 

int main() {
	
	int cmd = 1;
	char command[MAX_SIZE];
	char spec[MAX_SIZE];
	char result[MAX_SIZE];
  	
  	do {
		
  	    	printf("\n");
  		printf("1. Date\n");
  		printf("2. Current directory\n");
  		printf("3. Contents of current directory\n");
  		printf("4. Create file\n");
  		printf("5. Delete file\n");
  		printf("6. Read a text file\n");
  		printf("7. Write a text file\n");
  		printf("8. Create a folder\n");
  		printf("9. Delete a folder\n");
  		printf("10. Custom command\n");
  		printf("0. Exit\n");
		printf("\n");
  		printf("Enter choice: ");
		scanf("%d", &cmd);
		printf("\n");
  		
  		
  		switch(cmd) {
  		    
  			case 1:
  			    	printf("Today's date is:\n");
  				system("date");
				printf("\n");
  				break;
  			
  			case 2:
				system("pwd");
				printf("\n");
  				break;
  				
  			case 3:
  				system("ls");
  				break;
  			
  			case 4:
  				printf("Enter file name:\n");
				gets(spec);
  				fgets(spec,20,stdin);
  				char command4[MAX_SIZE] = "touch ";
  				strcat(command4, spec);
  				puts(command4);
  				system(command4);
				printf("\n");
  				break;
  				
  			case 5:
  				printf("Enter file name to be deleted:\n");
				gets(spec);
  				fgets(spec,20,stdin);
  				char command5[MAX_SIZE] = "rm ";
  				strcat(command5, spec);
  				puts(command5);
  				system(command5);
				printf("\n");
  				break;
  				
  			case 6:
  				printf("Enter file name:\n");
				gets(spec);
  				fgets(spec,20,stdin);
  				char command6[MAX_SIZE] = "cat ";
  				strcat(command6, spec);
  				puts(command6);
  				system(command6);
				printf("\n");
  				break;
  				
  			case 7:
  				printf("Enter file name:\n");
				gets(spec);
  				fgets(spec,20,stdin);
  				char command7[MAX_SIZE] = "vi ";
  				strcat(command7, spec);
  				puts(command7);
  				system(command7);
				printf("\n");
  				break;
  			
  			case 8:
  				printf("Enter folder name:\n");
				gets(spec);
  				fgets(spec,20,stdin);
  				char command8[MAX_SIZE] = "mkdir ";
  				strcat(command8, spec);
  				puts(command8);
  				system(command8);
				printf("\n");
  				break;
  				
  			case 9:
  				printf("Enter folder name:\n");
				gets(spec);
  				fgets(spec,20,stdin);
  				char command9[MAX_SIZE] = "rmdir ";
  				strcat(command9, spec);
  				puts(command9);
  				system(command9);
				printf("\n");
  				break;
  				
  			case 10:
  				printf("\nCustom command:");
				printf("\nEnter File or folder Name: ");
				gets(spec);
				fgets(spec,20,stdin);
				printf("Enter command:\n");
				gets(command);
				strcat(command, spec);
				puts(command);
  				system(command);
				printf("\n");
  				break;
			default:
				break;
  				
  		}
  		
		
  	}
	
	while(cmd != 0) ;
	return 0;
  
}

