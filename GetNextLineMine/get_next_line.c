/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:30:02 by salperez          #+#    #+#             */
/*   Updated: 2023/05/29 12:49:56 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

	//actualizar stuck una vez utilizado
// char	*ft_create_line(char *stuck)
// {

// }

char *get_next_line(int fd)
{
	char		*tmp[BUFFER_SIZE + 1];
	ssize_t		numbytes;
	char		*line;
	static char	*stuck;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	numbytes = 1;
	while (!(*ft_strchr(stuck, '\n')) && numbytes > 0)
	{
		numbytes = read(fd, tmp, BUFFER_SIZE);
		if (numbytes == -1)
			return (NULL);
		tmp[numbytes] = '\0';
		stuck = ft_strjoin(stuck, tmp);
	}
	line = ft_create_line(stuck);
	return (line);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc <= 1)
		return (0);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		line = get_next_line(fd);
		printf("%s", line);
	}
	close(fd);
	return (0);
}
