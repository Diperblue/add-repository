#include "includes/main.h"

void verifygc(int argc) {
    if (argc<=1) {
        fprintf(stderr, ERRMSG);
        exit(1);
    }
}



int main(int argc, char* argv[])
{
    verifygc(argc); // verificando args < 1

    if(strcmp(argv[1], "ppa") == 0)
    {
        printf("Starting configure...\n");
        
    } else {
        printf("In production...");
    }
    return 0;
}