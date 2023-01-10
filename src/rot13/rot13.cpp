#include<iostream>

int main(int argc,char **argv)
{
    if(argc < 2)
    {
        std::cerr<<"No arguments provided"<<std::endl;    
    }

    std::string out_str;

    for(char& c: std::string(argv[1]))
    {
        if((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm') )
        {
            out_str.push_back(c+13);
        }
        else if((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
        {
            out_str.push_back(c-13);
        }
        else
        {
            out_str.push_back(c);
        }
    }   

    std::cout<<"IN :"<<argv[1]<<"\n";
    std::cout<<"OUT:"<<out_str<<"\n";

    return EXIT_SUCCESS;
}
