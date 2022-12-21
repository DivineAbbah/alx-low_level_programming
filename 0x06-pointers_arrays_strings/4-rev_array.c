/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of reverse
 * @n: size of elementsin the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n = n - 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
