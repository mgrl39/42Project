/* If s1 is greater than s2 return greater than 0 */
/* If s1 is equal to s2 return 0 */
/* If s1 is less than s2 return less than 0 */
/* compare two set of characters lexicographically */
int	ft_strcmp(char	*s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
