#include <iostream>
#include <string>
#include <cctype>

std::string convertToUp(const std::string& msg)
{
	size_t 		i;
    std::string result;

	result = msg;
    for (i = 0; i < result.size(); ++i)
	    result[i] = std::toupper(result[i]);
    return (result);
}

int maindedede(int argc, char *argv[])
{
	int			i;
    std::string message;
    std::string fullMessage;
	std::string result;

	if (argc > 1)
	{
        for (i = 1; i < argc; ++i)
		{
            message = argv[i];
            result = convertToUp(message);
            fullMessage += result;
            if (i < argc - 1)
				fullMessage += " ";
        }
        std::cout << fullMessage << std::endl;
    }
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
