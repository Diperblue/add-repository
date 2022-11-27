#include "includes/file_source.h"

FILE* open_file(char* file_name)
{
    FILE *fp;
    fp = fopen(DIR_SOURCE, "a");
    return fp;
}

int modify_file(FILE* file, char* char_modify)
{
    /* char* char_modify_com = (char*)malloc(sizeof(char_modify) * sizeof(char))
    strcpy(char_modify_com, IN_COMMAND);
    strcat(char_modify_com, char_modify);
    strcat(char_modify_com, "/ubuntu"); */
    
    fprintf(file, char_modify);
    return 0;
}