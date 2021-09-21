#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*res;
	char	*nbr;
	char	*dec = "0123456789";
	char	*hex = "0123456789ABCDEF";
	char	*bin = "01";

	nbr = (char *) malloc(sizeof(char) * 33);
	if (!nbr)
		return (0);
	
	strcpy(nbr, "255");
	res = ft_convert_base(nbr, dec, hex);
	printf("DEC 2 HEX : %s -> %s\n", nbr, res);
	free(res);

	strcpy(nbr, "-2147483647");
	res = ft_convert_base(nbr, dec, bin);
	printf("DEC 2 BIN : %s -> %s\n", nbr, res);
	free(res);

	strcpy(nbr, "-1111111111111111111111111111111");
	res = ft_convert_base(nbr, bin, dec);
	printf("BIN 2 DEC : %s -> %s\n", nbr, res);
	free(res);

	strcpy(nbr, "ABC");
	res = ft_convert_base(nbr, hex, bin);
	printf("HEX 2 BIN : %s -> %s\n", nbr, res);
	free(res);

	strcpy(nbr, "111100001111");
	res = ft_convert_base(nbr, bin, hex);
	printf("BIN 2 HEX : %s -> %s\n", nbr, res);
	free(res);

	free(nbr);
}
