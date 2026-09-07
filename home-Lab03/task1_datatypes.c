#include<stdio.h>
 #include<stdbool.h>
 int main() {
 	int age=19;
 	char letter='S';
 	float pi=3.14159;
 	double speedoflight=300000000.0;
	bool isEligible=true;   
 	printf("age: %d, Size: %zu bytes\n", age, sizeof(age));
 	printf("letter: %c, Size: %zu bytes\n", letter, sizeof(letter));
 	printf("pi: %f, Size: %zu bytes\n", pi, sizeof(pi));
 	printf("speedoflight: %.3lf, Size: %zu bytes\n", speedoflight, sizeof(speedoflight));
 	printf("is eligible: %d, Size: %zu bytes\n", isEligible, sizeof(isEligible));
 	return 0;	
 }
