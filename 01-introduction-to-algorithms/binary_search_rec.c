#include <stdio.h>
#include <stdbool.h>

bool binary_search_rec(int list[], int item, size_t low, size_t high)
{
	size_t guess = (low + high) / 2;

	if (low > high)
		return (false);

	if (list[guess] == item)
		return (true);

	if (list[guess] < item)
		return (binary_search_rec(list, item, guess + 1, high));

	if (list[guess] > item)
		return (binary_search_rec(list, item, low, guess - 1));
}

int main(int argc, char const *argv[])
{
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Result: %d\n", binary_search_rec(list, 10, 0, 9));
	return 0;
}
