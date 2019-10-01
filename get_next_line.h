/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 13:24:27 by ydavis            #+#    #+#             */
/*   Updated: 2018/12/17 19:09:47 by ydavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct	s_gnl{
	char				*txt;
	int					fd;
	struct s_gnl		*next;
}				t_gnl;
int				get_next_line(const int fd, char **line);
#endif
