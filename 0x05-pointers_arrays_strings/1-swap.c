/**
 * swap_int - Swap the value of 2 int
 * @a: 1st int
 * @b: 2nd int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
