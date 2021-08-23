void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}

int 	main(){
	int a = 8;
	int b = 3;
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}
