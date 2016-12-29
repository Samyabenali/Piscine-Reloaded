/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:18:43 by sait-ben          #+#    #+#             */
/*   Updated: 2016/11/16 18:39:28 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*buf;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buf, 1 != 0))
			write(1, &buf, 1);
		close(fd);
	}
	if (argc < 2)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
