#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 1) { ft_putendl_fd("no input file given", 1); return (0); }
	
	char *line;
	int ret;
	int fd;
	int i = 1;

	while (av[i])
	{
		fd = open(av[i], O_RDONLY);
		ret = 1;
		while ((ret = get_next_line(fd, &line)))
		{
			if (ret == -1)
				return (0);
			free(line);
		}
		free(line);
	
		ret = get_next_line(fd, &line);
		free(line);

		close(fd);
		i++;
	}
}
