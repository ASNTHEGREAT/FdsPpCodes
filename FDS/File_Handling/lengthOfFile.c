#include <stdio.h>

long int findSize(char file_name[])
{
	FILE *fp = fopen(file_name, "r");

	if (fp == NULL) {
		printf("File Not Found!\n");
		return -1;
	}

	fseek(fp, 0L, SEEK_END);

	long int res = ftell(fp);
	fclose(fp);

	return res;
}
int greater(int a, int b)
{
    //TODO: Print the file with greater bytes.
}

// Driver code
int main()
{
	char file_name[] = { "data.txt" };
    char file_name2[] = { "data2.txt" };
	long int res = findSize(file_name);
    long int res2 = findSize(file_name2);
	if (res != -1)
		printf("Size of the file is %ld bytes \n", res);
    if (res2 != -1)
		printf("Size of the file is %ld bytes \n", res2);
    
	return 0;
}
