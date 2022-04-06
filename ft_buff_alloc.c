#include <stdlib.h>

char	*buf_alloc(char *old, int buff_size)
{
	char		*new;
	static int	size = 1;
	int			i;

	i = 0;
	size += buff_size;
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	while (old[i])
	{
		new[i] = old[i];
		i++;
	}
	new[i] = 0;
	free(old);
	return (new);
}