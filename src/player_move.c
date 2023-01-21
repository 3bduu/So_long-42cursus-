/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:25:42 by abenlahb          #+#    #+#             */
/*   Updated: 2023/01/20 12:07:39 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	w_player(t_my_struct *player)
{
	if (player->map[player->player_y][player->player_x] == 'E'
		&& player->n_collect == 0)
	{
		player->map[player->player_y + 1][player->player_x] = '0';
		player->move++;
		ft_printf("You win!!");
		exit(0);
	}
	else if (player->map[player->player_y][player->player_x] == '1'
			|| player->map[player->player_y][player->player_x] == 'E')
		player->player_y++;
	else
	{
		if (player->map[player->player_y][player->player_x] == 'C')
			player->n_collect--;
		player->map[player->player_y][player->player_x] = 'P';
		player->map[player->player_y + 1][player->player_x] = '0';
		player->move++;
	}
}

void	s_player(t_my_struct *player)
{
	if (player->map[player->player_y][player->player_x] == 'E'
		&& player->n_collect == 0)
	{
		player->map[player->player_y - 1][player->player_x] = '0';
		player->move++;
		ft_printf("You win!!");
		exit(0);
	}
	else if (player->map[player->player_y][player->player_x] == '1'
			|| player->map[player->player_y][player->player_x] == 'E')
		player->player_y--;
	else
	{
		if (player->map[player->player_y][player->player_x] == 'C')
			player->n_collect--;
		player->map[player->player_y][player->player_x] = 'P';
		player->map[player->player_y - 1][player->player_x] = '0';
		player->move++;
	}
}

void	a_player(t_my_struct *player)
{
	player->left = 1;
	if (player->map[player->player_y][player->player_x] == 'E'
		&& player->n_collect == 0)
	{
		player->map[player->player_y][player->player_x + 1] = '0';
		player->move++;
		ft_printf("You win!!");
		exit(0);
	}
	else if (player->map[player->player_y][player->player_x] == '1'
			|| player->map[player->player_y][player->player_x] == 'E')
		player->player_x++;
	else
	{
		if (player->map[player->player_y][player->player_x] == 'C')
			player->n_collect--;
		player->map[player->player_y][player->player_x] = 'P';
		player->map[player->player_y][player->player_x + 1] = '0';
		player->move++;
	}
}

void	d_player(t_my_struct *player)
{
	player->right = 1;
	if (player->map[player->player_y][player->player_x] == 'E'
		&& player->n_collect == 0)
	{
		player->map[player->player_y][player->player_x - 1] = '0';
		player->move++;
		ft_printf("You win!!");
		exit(0);
	}
	else if (player->map[player->player_y][player->player_x] == '1'
			|| player->map[player->player_y][player->player_x] == 'E')
		player->player_x--;
	else
	{
		if (player->map[player->player_y][player->player_x] == 'C')
			player->n_collect--;
		player->map[player->player_y][player->player_x] = 'P';
		player->map[player->player_y][player->player_x - 1] = '0';
		player->move++;
	}
}
