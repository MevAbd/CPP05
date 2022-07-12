#include <iostream>
#include <stdexcept>
#include <cstdio>

void	checkAc(int ac)
{
	if (ac != 2)
	{
		throw std::invalid_argument("Invalid number of agument.");
	}
	else
		std::cout << "Everything is good !" << std::endl;
}

int	main(int ac, char **av)
{
	(void)av;
	try 
	{
		checkAc(ac);
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << "Exception caught : " << e.what() << std::endl;
		return (0);
	}
	std::cout << "Ici ?" << std::endl;
	return (1);
}
