#include <iostream>
#include <iomanip>
#include <numeric>

int main(int argc,char **argv)
{
    if(argc != 3)
    {
        std::cout<<"Incorrect number arguments specified"<<std::endl;
        return EXIT_FAILURE;
    }

    uint64_t limit   = std::stoul(argv[2]);
    std::string mode = argv[1];

    if(mode == "leibniz")
    {
        long double pi  = 1.0;

        for (uint64_t i = 0; i < limit; i++)
        {
            uint64_t denominator = i * 2 + 3;
            if (i % 2 == 0)
            {
                pi -= (1.0L/ denominator);
            }
            else
            {
                pi += ( 1.0L/ denominator);
            }
        }

        pi *= 4.0L;

        std::cout <<"Actual Pi  : "<< "3.1415926535897932384626433" << std::endl;
        std::cout <<"Calculated : "<< std::setprecision(25) << pi << std::endl;
    }
    else if(mode == "chudnovsky")
    {
        /*long double pi  = 1.0;
        for (uint64_t i = 0; i < limit; i++)
        {
            
        }
        std::cout << std::setprecision(15) << pi << std::endl;*/
    }

    
    return EXIT_SUCCESS;   
}