main()
{
	int input, result;
	printf("Please input a number between 1 to 100\n");
	scanf("%d", &input);
	if (input > 1 && input < 100)
	{
		for (result = input; result < 500; result += input)
		{
			printf("%d\t", result);
		}
		return 0;
	}
	else
	{
		printf("ILLEGAL ARGUMENTS!");
		return 1;
	}
}