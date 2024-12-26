#include <unistd.h>

void	printer(char a)
{
	write(1, &a, 1);
}

int	tester(int board[10], int a, int b)
{
	int i3;

	i3 = 0;
	while (i3 < a)
	{
		if (b == board[i3] || i3 + board[i3] == a + b || i3 - board[i3] == a - b)
			return (0); // can´t be this possibility (test_number).
		i3++;
	}
	return (1); //1 = can be this possibility (test_number).
}

void	tq_recursive(int board[10], int *result, int column)
{
	int test_number;
	int i2;
	int	a;
	int	b;
	int	tester_result;

	test_number = 0;
	i2 = 0;
	if (column == 10)
	{
		*result = *result + 1;
		while (i2 < 10)
		{
			printer(board[i2] + '0');
			i2++;
		}
		printer('\n');
	}
	else
	{
		while (test_number < 10)
		{
			a = column;
			b = test_number;
			tester_result = tester(board, a, b);
			if (tester_result == 1)
			{
				board[column] = test_number;
				tq_recursive(board, result, column + 1);
			}
			test_number++;
		}
	}
}

int	ten_queens(void)
{
	int		board[10];
	int		i;
	int		result;
	int	position;

	i = 0;
	result = 0;
	position = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
	tq_recursive(board, &result, position);
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d.\n", ten_queens());
}
*/
