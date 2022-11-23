https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
int **matrix_scalar_multiply(int **m, int col, int row, int scalar)
{
	int **r_m;
	int i, j;

	r_m = (int **)malloc(sizeof(int *)*col);
	for (i = 0; i < col; i++)
		r_m[i] = (int *)malloc(sizeof(int)*row);

	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			r_m[i][j] = m[i][j] * scalar;
		}
	}

	return r_m;
}
