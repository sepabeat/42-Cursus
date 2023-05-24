/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:15:08 by salperez          #+#    #+#             */
/*   Updated: 2023/05/24 16:49:43 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*create_line(char *stored)
{
	char	*line;
	int		i;

	if (!stored || !*stored)
		return (NULL);
	i = 0;
	while (stored[i] != '\n' && stored[i] != '\0')
		i++;
	if (stored[i] == '\n')
		i++;
	line = malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (stored[i] != '\n' && stored[i] != '\0')
	{
		line[i] = stored[i];
		i++;
	}
	if (stored[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stored = NULL;
	char		temp[BUFFER_SIZE + 1];
	ssize_t		bytesdone;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytesdone = 1;
	while (!(ft_strchr(stored, '\n')) && bytesdone > 0)
	{
		bytesdone = read(fd, temp, BUFFER_SIZE);
		if (bytesdone < 0)
			return (free(stored), stored = NULL, NULL);
		temp[bytesdone] = '\0';
		stored = join_and_free(stored, temp);
		if (!stored)
			return (NULL);
	}
	line = create_line(stored);
	stored = update_stored(stored);
	return (line);
}

/* void	ft_leaks(void)
{
	system("leaks -q gnl");
} */

/*
int	main(void)
{
	int		fd;
	char	*line;

	atexit(ft_leaks);
	fd = open("testme.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("Línea:%s\n", line);
	free (line);
	line = get_next_line(fd);
	printf("Línea:%s\n", line);
	free (line);
	line = get_next_line(fd);
	printf("Línea:%s\n", line);
	free (line);
	close (fd);
	return (0);
}
*/
/*
atexis() es una función que se usa al final de un programa, principalmente
para limpiar o liberar memoria
O_RDONLY es el segundo argumento utilizado en open, le decimos que el archivo
va a ser solo para lectura, read only
*/