#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

//prototypes

int grand_sum(int[][5], int, int);

int main()
{
	int person_count, item_count, item_sales[10][5], total_sales[9], total_count, grand_count, grand_totals[5], print_count;
	char name[10][20];

	//Loop for inputing data
	for (person_count = 0; person_count<5; person_count++) {
		printf("Please input the name of the sales man.\n");
		scanf("%s", &name[person_count]);
		total_sales[person_count] = 0;
		for (item_count = 0; item_count<5; item_count++) {
			printf("Please input the number of sales for Item %d : ", item_count + 1);
			scanf("%d", &item_sales[person_count][item_count]);
			total_sales[person_count] = total_sales[person_count] + item_sales[person_count][item_count];

		}

	}


	//loop for calculating grand sales
	for (grand_count = 0; grand_count<5; grand_count++) {
		grand_totals[grand_count] = 0;
		grand_totals[grand_count] = grand_sum(item_sales, 5, grand_count);

	}

	//loop for calculating grand total sales
	grand_totals[5] = 0;
	for (total_count = 0; total_count<10; total_count++) {
		grand_totals[5] += total_sales[total_count];
	}



	printf("Name\t\tItem1\t\tItem2\t\tItem3\t\tItem4\t\tItem5\t\tTotalsales \n");

	//loop for printing out sales output
	for (person_count = 0; person_count<5; person_count++) {

		int j = 0;
		printf("%s\t\t", name[person_count]);

		for (j = 0; j<5; j++) {
			printf("%d \t\t", item_sales[person_count][j]);
		}

		printf("%d \n", total_sales[person_count]);

	}
	printf("GrandTotal \t");

	//loop for printing grand total sales output
	for (print_count = 0; print_count <= 5; print_count++) {
		printf("%d \t\t", grand_totals[print_count]);
	}

	return 0;
}

int grand_sum(int arr[][5], int size, int column) {
	int i, sum = 0;
	for (i = 0; i<size; i++) {
		sum = sum + arr[i][column];
	}
	return sum;
}