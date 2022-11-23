https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// returns the number of 1's in a word 
unsigned int popCnt(unsigned int input) 
{ 
	unsigned int sum = 0; 

	for (int i = 0; i < 32; i++) 
	{
		sum += (input) & 1; 
		input = input/2; 
	} 

	return sum; 
} 

