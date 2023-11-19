#include <iostream>
#include <color.hpp>

int main()
{
	std::cout << cc::white << "white" << std::endl;
	std::cout << cc::gray << "gray" << std::endl;
	std::cout << cc::darkgray << "darkgray" << std::endl;
	std::cout << cc::black << "black" << std::endl;

	std::cout << cc::darkred << "darkred" << std::endl;
	std::cout << cc::red << "red" << std::endl;
	std::cout << cc::darkyellow << "darkyellow" << std::endl;
	std::cout << cc::yellow << "yellow" << std::endl;
	std::cout << cc::green << "green" << std::endl;
	std::cout << cc::darkgreen << "darkgreen" << std::endl;
	std::cout << cc::cyan << "cyan" << std::endl;
	std::cout << cc::darkcyan << "darkcyan" << std::endl;

	std::cout << cc::darkblue << "darkblue" << std::endl;
	std::cout << cc::blue << "blue" << std::endl;
	std::cout << cc::darkmagenta << "darkmagenta" << std::endl;
	std::cout << cc::magenta << "magenta" << std::endl;
}
