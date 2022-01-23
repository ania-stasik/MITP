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
    
    /*
    * 1 = bubble sort
    * 2 = select sort
    */
    int sort_algorithm = 0;

    
    int opt;
    while ((opt = getopt(argc, argv, "n:")) != -1) {
        switch (opt) {
            case 'n': {
                if (strcmp(optarg, "bubble") == 0) {
                    printf("Using bubble sort...\n");
                    sort_algorithm = 1;
                } else if (strcmp(optarg, "select") == 0) {
                    printf("Using select sort...\n");
                    sort_algorithm = 2;
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
    
    int array_size;
    
    int arr[5] = {1, 2, 4, 3, 0};
    
    
    if (sort_algorithm == 1) {
        print_array(arr);
        bubble_sort(arr, 5);
        print_array(arr);
    } else if (sort_algorithm == 2) {
        print_array(arr);
        bubble_sort(arr, 5);
        print_array(arr);
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
