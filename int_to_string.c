https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*---------------------------------------------------------------------------------------------
 * (function: convert_int_to_bit_string)
 * Outputs a string msb to lsb.  For example, 3 becomes "011"
 *-------------------------------------------------------------------------------------------*/
char *convert_long_to_bit_string(long long orig_long, int num_bits)
{
	int i;
	char *return_val = (char*)malloc(sizeof(char)*(num_bits+1)); // in MIPS consider this function an assignment to a reserved string
	long long mask = 1;

	for (i = num_bits-1; i >= 0; i--)
	{
		if((mask & orig_long) > 0)
		{
			return_val[i] = '1';	
		}
		else
		{
			return_val[i] = '0';	
		}
		mask = mask << 1;
	}
	return_val[num_bits] = '\0';
	
	return return_val;
}
