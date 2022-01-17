#include "sort_str.h"
#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <stdlib.h>

void print_usage(char *const *argv);

void print_array(char *[], int n);

int main(int argc, char *argv[]) {

    if (argc <= 1) {
        print_usage(argv);
        return -1;
    }

    int opt;
    while ((opt = getopt(argc, argv, "n:")) != -1) {
        switch (opt) {
            case 'n': {
                char *arr[5] = {"zzz", "aaa", "bbb", "ddd", "ccc"};
                if (strcmp(optarg, "bubble") == 0) {
                    printf("Using bubble sort...\n");
                    print_array(arr, 5);
                    bubble_str(arr, 5);
                    print_array(arr, 5);
                } else if (strcmp(optarg, "select") == 0) {
                    printf("Using select sort...\n");
                    print_array(arr, 5);
                    select_str(arr, 5);
                    print_array(arr, 5);
                } else {
                    print_usage(argv);
                }
                break;
            }
            default:
                print_usage(argv);
                exit(EXIT_FAILURE);
        }
    }
    return 0;

}


void print_array(char *arr[5], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

void print_usage(char *const *argv) {
    printf("Usage: ./%s -nvalue\n", argv[0]);
    printf("\nPossible values:");
    printf("\nbubble - for bubble sort");
    printf("\nselect - for select sort");
}
