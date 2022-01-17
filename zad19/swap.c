#include <malloc.h>
#include <string.h>

//
// Created by Ania on 16.01.2022.
//
void swap(char *str1, char *str2) {
    char *temp = (char *) malloc((strlen(str1) + 1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

