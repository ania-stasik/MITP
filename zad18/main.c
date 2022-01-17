#include <stdio.h>
#include "sort_int.h"
#include <string.h>
#include <getopt.h>
#include <stdlib.h>

void print_usage(char *const *argv);

void print_array(const int *arr);

int main(int argc, char *argv[]) {

    if (argc <= 1) {
        print_usage(argv);
        return -1;
    }

    int opt;
    while ((opt = getopt(argc, argv, "n:")) != -1) {
        switch (opt) {
            case 'n': {
                int arr[5] = {1, 2, 4, 3, 0};
                if (strcmp(optarg, "bubble") == 0) {
                    printf("Using bubble sort...\n");
                    print_array(arr);
                    bubble_sort(arr, 5);
                    print_array(arr);
                } else if (strcmp(optarg, "select") == 0) {
                    printf("Using select sort...\n");
                    print_array(arr);
                    select_sort(arr, 5);
                    print_array(arr);
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

void print_array(const int *arr) {
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_usage(char *const *argv) {
    printf("Usage: ./%s -nvalue\n", argv[0]);
    printf("\nPossible values:");
    printf("\nbubble - for bubble sort");
    printf("\nselect - for select sort");
}
