/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:17:27 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/02 19:12:25 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_wall_1(t_vars *vars)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < vars->length)
	{
		if (vars->map[0][y] != '1' || vars->map[vars->width - 1][y] != '1')
		{
			printf ("Error!\nWrong set tree!\n");
			exit (EXIT_FAILURE);
		}
		y ++;
		x ++;
	}
}

void	ft_check_wall_2(t_vars *vars)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (x < vars->width)
	{
		if (vars->map[x][0] != '1' || vars->map[x][vars->length - 1] != '1')
		{
			printf ("Error!\nWrong set tree!\n");
			exit (EXIT_FAILURE);
		}
		x ++;
		y ++;
	}
}

void	check_map_name(char *argv_1)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = ft_strlen(argv_1) - 1;
	k = 4;
	str = malloc(sizeof(char *) * 5);
	if (str == NULL)
		return ;
	while (i < k)
	{
		str[i] = argv_1[j];
		i++;
		j--;
	}
	if (str[3] != '.' || str[2] != 'b' || str[1] != 'e'
		|| str[0] != 'r')
	{
		printf("Error\nWRONG EXT\n");
		exit(EXIT_FAILURE);
	}
	free (str);
}
