#include <iostream>

int main() {
	int temp_one = 0;
	int temp_two = 0;
	char point = ' ';
	char rebot_c = ' ';
	bool rebot = true;
	while (rebot)
	{


		std::cout << "enter the first number: \n";
		std::cin >> temp_one;
		std::cout << "carry out the desired action (/,*,+,-):\n";
		std::cin >> point;
		std::cout << "enter the second number"<< std::endl;
		std::cin >> temp_two;
		switch (point)
		{
		case '+':
			std::cout << temp_one + temp_two;
			break;
		case '-': break;
			std::cout << temp_one - temp_two;
		case '/': break;
			if (temp_one == 0 || temp_two == 0) {
				std::cout << "/0";
			}
			else
			{
				std::cout << temp_one / temp_two;
			}
		case '*': break;
			std::cout << temp_one * temp_two;
		default: std::cout << "You have entered an invalid action.\n";
			break;
		}
		std::cout << "calculate another one ? y / n"<<std::endl;
		std::cin >> rebot_c;
		if (rebot_c == 'y')
			continue;
		rebot = false;
		
	}

}