/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:16:06 by hel-hich          #+#    #+#             */
/*   Updated: 2022/02/24 21:41:29 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s, char *buff);
char	*get_next_line(int fd);
char	*get_the_line(char *buffer);
char	*get_the_res(char *buffer);
char	*get_the_buffer(int fd, char *buffer);

#endif
