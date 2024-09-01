#include <iostream>
// #include <cctype>

int main(int ac, char *av[])
{
    std::string msg;
    std::string fullMsg;
    int i;
    size_t j;

    if (ac > 1)
    {
        for (i = 1; i < ac; i++)
        {
            msg = av[i];
            for (j = 0; j < msg.size(); j++)
            {
                fullMsg += std::toupper(msg[j]);
            }
            fullMsg += " ";
        }
        std::cout << fullMsg << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;    
    return 0;
}
