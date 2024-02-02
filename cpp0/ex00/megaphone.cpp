#include <iostream>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			if (i < argc - 1)
				std::cout << ' ';		
			i++;
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}