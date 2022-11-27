#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fp;
    char string_disc[] = "arquivo linha 2";
    fp = fopen("teste.txt", "a");
    if(fp == NULL)
    {
        printf("Arquivo não encontrado");
        return 1;
    }
    fprintf(fp, "\ntestando linha 2\n");
    fclose(fp);
    return 0;
}