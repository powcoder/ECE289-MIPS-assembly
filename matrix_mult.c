https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
int **matrix_multiply(int **m, int mcol, int mrow, int **n, int ncol, int nrow)
{
	int **r_m = null;
	int i, j;

	if (nrow != mcol)
		return r_m;

	r_m = (int **)malloc(sizeof(int *)*ncol);
	for (i = 0; i < ncol; i++)
		r_m[i] = (int *)malloc(sizeof(int)*mrow);

	for (i = 0; i < ncol; i++)
	{
		for (j = 0; j < mrow; j++)
		{
			r_m[i][j] = 0;
			for (k = 0; k < nrow; k++)
			{
				r_m[i][j] += m[k][j] * n[i][k];
			}
		}
	}

	return r_m;
}
