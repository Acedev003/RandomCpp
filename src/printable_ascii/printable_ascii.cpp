#include <iostream>

int main()
{
    std::cout<<"Printable Ascii characters [32 -> 126] : \n"<<std::endl;

    for(char c{' '}; c <= '~'; c++)
    {
        std::cout << c << (( (c+1) % 32)?' ':'\n') ;
    }

    std::cout<<"\n\n";

    return EXIT_SUCCESS;
}