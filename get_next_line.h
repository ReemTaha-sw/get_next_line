/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:46:41 by rosman            #+#    #+#             */
/*   Updated: 2024/03/24 14:19:45 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(const char *str);
char	*ft_strjoin(char *string1, char *string2);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
char	*read_line(int fd, char *str);
char	*skip_line(char *input_string);
char	*extract_line(char *input_str);
char	*get_next_line(int fd);

#endif