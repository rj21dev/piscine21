#include <unistd.h>

void	set_queen(int i, int j, int board[10][10])
{
	int	x;
	
	x = 0;
	while (x < 10)
	{
		++board[x][j];
		++board[i][x];
		if ((i - j + x) > 0 && (i - j + x) < 10)
			++board[i - j + x][x];
		if ((i + j - x) > 0 && (i + j - x) < 10)
			++board[i + j - x][x];
		board[i][j] = -1;
		++x;
	}
}

void	del_queen(int i, int j, int board[10][10])
{
	int	x;
	
	x = 0;
	while (x < 10)
	{
		--board[x][j];
		--board[i][x];
		if ((i - j + x) > 0 && (i - j + x) < 10)
			--board[i - j + x][x];
		if ((i + j - x) > 0 && (i + j - x) < 10)
			--board[i + j - x][x];
		board[i][j] = 0;
		++x;
	}
}

void	print_solution(int board[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i][j] == -1)
			{
				c = j + '0';
				write(1, &c, 1);
			}
			++j;
		}
		++i;
	}
	write(1, "\n", 1);
}

void	try_queen(int i, int board[10][10], int *total)
{
	int	j;
	
	j = 0;
	while (j < 10)
	{
		if (board[i][j] == 0)
		{
			set_queen(i, j, board);
			if (i == 9)
			{
				print_solution(board);
				++(*total);
			}
			else
				try_queen(i + 1, board, total);
			del_queen(i, j, board);
		}
		++j;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int board[10][10];
	int	total;
	int	i;
	int	j;

	total = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			++j;
		}
		++i;
	}
	try_queen(0, board, &total);
	return (total);
}
