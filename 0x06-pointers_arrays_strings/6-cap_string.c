/**
 * cap_string - Pints in uppercase
 * @k: pointer char
 * return: char k
 */
char *cap_string(char *k)
{
	int i = 0;
	int j = 0;
	char karen[] = " \t\n,;.!\?\"(){}";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; karen[j] < '\0'; j++)
		{
			if (k[i] >= 'a' && k[i] <= 'z' && i == 0)
			{
				k[i] -= 32;
			}
	                if (k[i] >= 'a' && k[i] <= 'z' && k[i] - 1 == karen[j])
			{
		                k[i] = k[i] - 32;
			}
		}
	}
	return (k);
}
