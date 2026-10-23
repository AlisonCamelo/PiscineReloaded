/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamelo <acamelo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:08:14 by durisosa          #+#    #+#             */
/*   Updated: 2026/05/31 15:04:49 by acamelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	ft_display_file(char *filename)
{
	char	buffer[1024];
	int		bytes_read;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	bytes_read = read(fd, buffer, 1024);
	if (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
