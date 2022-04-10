#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch, file_name[25];
    FILE* fp;

 //   printf("Enter the name of file you wish to see\n");
 //   fgets(file_name, sizeof(file_name), stdin);
 //   file_name[strlen(file_name) - 1] = 0x00;

    fp = fopen("trace.txt", "rb"); // read binary mode

    if (fp == NULL) //error checking
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

 //   printf("The contents of %s file are :\n", file_name);

    printf("The contents of %s file are :\n", "trace.txt");

    int i = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%d ", ch);

        if (!(++i % 10)) 
            putc('\n', stdout);
    }
    fclose(fp);
    putc('\n', stdout);

    return 0;
}

// References:
// 1. https://stackoverflow.com/a/47089539/
// 2. https://stackoverflow.com/a/33489946/