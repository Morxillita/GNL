#include "get_next_line.h"

int	main()
{
	int		fd;
	char	*line;

	fd = open("file2.txt", O_RDONLY);
	if (fd == -1)
		return (perror("Error opening the file"), 1);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	if (close(fd) == -1)
		return (perror("Error closing the file"), 1);
	return (0);
}
