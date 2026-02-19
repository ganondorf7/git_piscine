int ft_ten_queens_puzzle(void)
{
	char **board
	int	i;

	i = 0;
	board = malloc(10)
	while (i <= 10)
		board[i++] = malloc(10)
	i = 0;
	while (i <= 10)
		close_cells(i);
		add_queen;
	i++;
}

print_sequence();

close_cells(char **board, int	j)
{
	int	i;

	i = 0;
	while (i < 10 - j)
	{
		board[i][j] = 'x';
	}
}

add_queen(int j)
{
	int	i;

	i = 0;
	while (i <= 10)
	if(board[j][i] = 'x')
		i++;
	board[j][i] = queen;
}
