/**
 * swap_int - swap value of two int
 * @a: pointer one
 * @b: pointer two
 */

void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
