#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "source3.h"
#pragma warning (disable: 4996)

int main() {
	int choice;
	int size;
	char str1[100];
	char str[50];

	do {
		printf("\nPick an option in the menu");
		printf("\n1. Arrays");
		printf("\n2. Name input");
		printf("\n3. Calculator");
		printf("\n4. Zodiac Sign");
		printf("\n5. Time Converter");
		printf("\n6. Numuber Guessing Game");
		printf("\n7  Encrypting and Decrypting Strings");
		printf("\n8. Exit");

		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("\nEnter the size of the array: ");
			scanf("%d", &size);

			int* arr = (int*)malloc(size * sizeof(int));

			for (int i = 0; i < size; i++) {
				printf("Element %d: ", i);
				scanf("%d", &arr[i]);
			}
			get_array(arr, size);
			break;
		case 2: /*{

			Information person = personInfo();
			printf("\nInformation entered:\n");
			printf("Name: %s\n", person.name);
			printf("Age: %d\n", person.age);
			printf("Course: %s\n", person.course);.
			printf("Year: %d\n", person.year);
			printf("Address: %s\n", person.address);
			break;
		}
		*/
			stringfun(str1);
			break;
		case 3:
			calculator();
			break;
		case 4:
			getbirthday();
			break;
		case 5: {
			gettime();
			break;
		}
		case 6:
			number_guess();
			break;
		case 7:
			printf("Enter string: ");
			scanf(" %[^\n]s", str);
			break;
		default:
			printf("You exited");
		}
	} while (choice != 8);
	return 0;
}

