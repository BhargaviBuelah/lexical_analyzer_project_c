#include<stdio.h>
#include"analyzer.h"

int main(int argc,char *argv[])
{
    printf("\t\t\t\033[48;2;128;0;128m\033[38;2;255;253;208m::Lexical Analyzer::\033[0m\n");
    if(argc!=2)
    {
        printf("\033[1;31mError ❌: More than 1 argument is required\033[0m\n");
        return 0;
    }
    else
    {
         return do_analyze(argc, argv); // Call and return the result of do_analyze
    }
}