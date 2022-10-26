#include <cctype>
#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    char c;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (av[++i])
    {
        for (int j = 0; av[i][j]; j++)
        {
            c = toupper(av[i][j]);
            std::cout << c;
        }
    }
    std::cout << std::endl;
}