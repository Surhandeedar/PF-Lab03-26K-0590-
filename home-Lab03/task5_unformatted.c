#include <stdio.h>
int main() {
	char ch;
	char fullName[50];
	
	printf("Enter a single character and press enter: ");
	ch=getchar();
	getchar();
	printf("You entered: ");
	putchar(ch);
	printf("\n");
	
	printf("Write your Full Name and press enter: ");
	fgets(fullName, sizeof(fullName), stdin);
	printf("Your name is: ");
	puts(fullName);
	printf("\n");
	return 0;
	}
