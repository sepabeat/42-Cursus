/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:15:08 by salperez          #+#    #+#             */
/*   Updated: 2023/05/30 16:07:43 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*update_stored(char *stored)
{
	char	*aux;
	char	*p;
	int		i;

	p = ft_strchr(stored, '\n');
	if (!p)
	{
		free (stored);
		return (NULL);
	}
	p++;
	aux = malloc(sizeof(char) * (ft_strlen(p) + 1));
	if (!aux)
		return (NULL);
	i = 0;
	while (*p != '\0')
	{
		aux[i] = *p;
		i++;
		p++;
	}
	aux[i] = '\0';
	free (stored);
	return (aux);
}

char	*mix_free(char *stored, char *temp)
{
	char	*aux;

	if (!stored)
	{
		stored = malloc(1);
		stored[0] = 0;
	}
	if (!stored)
		return (NULL);
	aux = ft_strjoin(stored, temp);
	free (stored);
	return (aux);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stored[FD_MAX] = {NULL};
	char		temp[BUFFER_SIZE + 1];
	ssize_t		bytesdone;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytesdone = 1;
	while (bytesdone > 0)
	{
		bytesdone = read(fd, temp, BUFFER_SIZE);
		if (bytesdone < 0)
			return (free(stored[fd]), stored[fd] = NULL, NULL);
		temp[bytesdone] = '\0';
		stored[fd] = mix_free(stored[fd], temp);
		if (!stored[fd])
			return (NULL);
		if (ft_strchr(stored[fd], '\n'))
			break ;
	}
	line = create_line(stored[fd]);
	stored[fd] = update_stored(stored[fd]);
	return (line);
}

// int	main(void)
// {
// 	int		fd[2];
// 	int		i;
// 	char	*line;

// 	fd[0] = open("testme.txt", O_RDONLY);
// 	fd[1] = open("testme2.txt", O_RDONLY);
// 	i = 1;
// 	while (i < 4)
// 	{
// 		line = get_next_line(fd[0]);
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd[1]);
// 		printf("%s", line);
// 		free(line);
// 		i++;
// 	}
// 	close(fd[0]);
// 	close(fd[1]);
// 	return (0);
// }

/*
atexis() es una función que se usa al final de un programa, principalmente
para limpiar o liberar memoria
O_RDONLY es el segundo argumento utilizado en open, le decimos que el archivo
va a ser solo para lectura, read only
*/