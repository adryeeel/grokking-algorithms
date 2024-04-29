#include <stdio.h>
#include <stdbool.h>

bool binary_search(int *list, int item, size_t size)
{
	int guess;
	int low = 0;
	int high = size - 1;

	size_t op_amount = 0;

	while (low <= high)
	{
		op_amount++;
		guess = (low + high) / 2;

		if (list[guess] == item)
			return (true);

		else if (list[guess] < item)
			low = guess + 1;

		else if (list[guess] > item)
			high = guess - 1;
	}

	return (false);
}

int main(void)
{
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Result: %d\n", binary_search(list, 10, 10));
	return (0);
}
