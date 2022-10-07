#include <stdio.h>
#include <stdio.h>


int main()
{
	FILE *fp = fopen("store.csv", "w");
	int item;

	if (!fp) {
		// Error in file opening
		printf("Can't open file\n");
		return 0;
	}

	// Asking user input for the
	// new record to be added
	printf("\nEnter Number of Items: ");
	scanf("%d", &item);
    int price[item], quantity[item], amount[item];
    for (int i = 0; i < item; i++)
    {
        printf("\nEnter Price of the item %d: ",i);
	    scanf("%d", &price[i]);
	    printf("\nEnter Quantity of item %d: ",i);
	    scanf("%d", &quantity[i]);
        amount[i] = price[i] * quantity[i];
    }
	//Printing
	fprintf(fp,"Item, Price, Quantity, Amount\n");
	// Saving data in file
    for (int i = 0; i < item; i++)
    {
        fprintf(fp, "%d, %d, %d, %d\n", i, price[i], quantity[i], amount[i]);
    }
    
	printf("\nNew item added to groceries");

	fclose(fp);
	return 0;
}