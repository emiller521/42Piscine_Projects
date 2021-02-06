
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		ft_putchar(str[i++]);
}

void 	ft_putnbr(int nbr)
{
	int sign;

	sign = 0;
	if (nbr >= 0)
		sign = nbr;
	if (nbr < 0)
	{
		sign = nbr * -1;
		ft_putchar('-');
	}
	if (sign > 9)
		ft_putnbr(sign / 10);
	ft_putchar((sign % 10) + '0');
}

int		ft_check_number(int board[9][9], int row, int col, int number)
{
	int i;
	int j;
	int base_row;
	int base_col;
	int exist;

	exist = 0;
	base_row = (row / 3) * 3;
	base_col = (col / 3) * 3;
	i = base_row;
	while ( i < base_row + 3)
	{
		j = base_col;
		while ( j < base_col + 3)
		{
			if(board[i][j] == number)
			{
				exist = 1;
				break ;
			}
			j++;
		}
		i++;
	}
	return (exist);
}

int		ft_is_available(int board[9][9], int row, int col, int number)
{
	int i;
	if(ft_check_number(board, row, col, number))
		return (0);
	i = 0;
	while (i < 9)
	{
		if (board[i][col] == number)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (board[row ][i] == number)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_board(int board[9][9])
{
	int i;
	int j;	
 	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(board[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}

int		print(int board[9][9], int row, int col, int *solution)
{
	int number;

	if (col == 9)
	{
		row = row + 1;
		col = 0;
	}
	if (row == 9)
		return (1);
	number = 1;
	while (number <= 9 && *solution == 0)
	{
		if (board[row][col] != 0)
			print(board, row, col + 1, solution);
		else if (ft_is_available(board, row, col, number))
		{
			board[row][col] = number;
			ft_print_board(board);
			if (print(board, row, col + 1, solution) == 1)
			{
				*solution = 1;
			}
			if (*solution == 0)
				board[row][col] = 0;
		}
		number++;
	}
	return (0);
}

int		ft_sudoku(int board[9][9]) 
{

	int solution;

	solution = 0;
	print(board, 0, 0, &solution);
	
	return (solution);
}


int main()
{
	// int board[3][3] = {  
	// 	{9, 0, 0} ,   
	// 	{2, 0, 0} , 
	// 	{0, 6, 0} 
	// 	};

 	// int board[9][9] = {  
		// {9, 0, 0, 0, 7, 0, 0, 0, 0} ,   
		// {2, 0, 0, 0, 9, 0, 0, 5, 3} , 
		// {0, 6, 0, 0, 1, 2, 4, 0, 0} , 
		// {8, 4, 0, 0, 0, 1, 0, 9, 0} , 
		// {5, 0, 0, 0, 0, 0, 8, 0, 0} , 
		// {0, 3, 1, 0, 0, 4, 0, 0, 0} , 
		// {0, 0, 3, 7, 0, 0, 6, 8, 0} , 
		// {0, 9, 0, 0, 5, 0, 7, 4, 1} , 
		// {4, 7, 0, 0, 0, 0, 0, 0, 0} 
		// };

 	int board[9][9] = {  
		{0, 0, 0, 0, 0 , 0, 0, 0, 0} ,   
		{0, 0, 0, 0, 0, 0, 0, 0, 0} , 
		{0, 0, 0, 0, 0, 0, 0, 0, 0} , 
		{0, 0, 0, 0, 0, 0, 0, 0, 0} , 
		{0, 0, 0, 0, 0, 0, 0, 0, 0} , 
		{0, 0, 0, 0, 0, 0, 0, 0, 0} , 
		{0, 0, 0, 0, 0, 0, 0, 0, 0} , 
		{0, 0, 0, 0, 0, 0, 0, 0, 0} , 
		{0, 0, 0, 0, 0, 0, 0, 0, 0} 		
	 }

    ft_putnbr(ft_sudoku(board));
    return (0);
}