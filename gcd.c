https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* GCD finds the greatest common denominator.  */
unsigned int gcd(unsigned int u, unsigned int v)
{
	unsigned int shift;
	/* GCD(0,x) := x */
	if (u == 0 || v == 0)
		return u | v;

	/* Let shift := lg K, where K is the greatest power of 2
	*        dividing both u and v. */
	for (shift = 0; ((u | v) & 1) == 0; ++shift) 
	{
		u >>= 1;
		v >>= 1;
	}   

	while ((u & 1) == 0)
		u >>= 1;

	/* From here on, u is always odd. */
	do 
	{
		while ((v & 1) == 0)  /* Loop X */
			v >>= 1;
			/* Now u and v are both odd, so diff(u, v) is even.
			*            Let u = min(u, v), v = diff(u, v)/2. */
		if (u <= v) 
		{
			v -= u;
		} 
		else 
		{
			unsigned int diff = u - v;
			u = v;
			v = diff;
		}
		v >>= 1;
	} while (v != 0); 
	
	return u << shift;
}

