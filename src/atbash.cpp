#include <iostream>

int main(int argc,char **argv)
{
    if(argc > 1)
    {
        std::string text(argv[1]);
        std::cout<<"Ciphered/Deciphered text : \n\n";
        for(char c : text)
        {
            if ( c == ' ')
            {
                std::cout<<c;               //Do not process white spaces
                continue;
            }

            c = toupper(c);
            c = 'A'+('Z' - c);
            std::cout<<c;
        }
        std::cout<<std::endl;
    }
    else
    {                             
        std::cerr<<"No arguments provided\n"<<std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}