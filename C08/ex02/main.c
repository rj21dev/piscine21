#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	for (int i = -5; i < 5; ++i)
		printf("ABS(%i) = %i\n", i, ABS(i));
}