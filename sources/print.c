//
// Created by ira on 13.04.2020.
//
#include "filler.h"
#include <stdio.h>
void print_coordinates(t_board *board)
{

	ft_putnbr(board->H);
	ft_putchar(' ');
	ft_putnbr(board->W);
	ft_putchar('\n');
}