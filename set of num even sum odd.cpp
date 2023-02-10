#include <stdio.h>

int main() {
    int num, i;
    printf("Enter the number of elements in the set: ");
    scanf("%d", &num);

    int set[num];
    printf("Enter the elements of the set: \n");
    for (i = 0; i < num; i++) 
	{
        scanf("%d", &set[i]);
    }

    printf("The odd numbers in the set are: \n");
    for (i = 0; i < num; i++) 
	{
        if (set[i] % 2 != 0) 
		{
            printf("%d\n", set[i]);
        }
    }

    printf("The even numbers in the set are: \n");
    for (i = 0; i < num; i++) 
	{
        if (set[i] % 2 == 0)
		 {
            printf("%d\n", set[i]);
        }
    }

    return 0;
}

