/******************************************************************************
 * @file: stats.c
 * @brief: C program to analyze 8 user input values
 *
 * This program takes exactly 8 unsigned char inputs from the user,
 * calculates minimum, maximum, mean, median, sorts the array in descending
 * order, and displays all statistics in a clean format.
 * Author: Zubair Iqbal
 * Date: July 1, 2025
 *****************************************************************************/

#include <stdio.h>
#include "stats.h"

#define SIZE 8

void print_statistics(unsigned char *data, unsigned int length) {
    printf("\nStatistics:\n");
    printf("Minimum: %u\n", find_minimum(data, length));
    printf("Maximum: %u\n", find_maximum(data, length));
    printf("Mean   : %u\n", find_mean(data, length));
    printf("Median : %u\n", find_median(data, length));
}

void print_array(unsigned char *data, unsigned int length) {
    printf("Array contents:\n[ ");
    for(unsigned int i = 0; i < length; i++) {
        printf("%u ", data[i]);
    }
    printf("]\n");
}

unsigned char find_median(unsigned char *data, unsigned int length) {
    sort_array(data, length);
    return (data[length/2 - 1] + data[length/2]) / 2;  // Always even, since SIZE = 8
}

unsigned char find_mean(unsigned char *data, unsigned int length) {
    unsigned int sum = 0;
    for(unsigned int i = 0; i < length; i++) {
        sum += data[i];
    }
    return sum / length;
}

unsigned char find_maximum(unsigned char *data, unsigned int length) {
    unsigned char max = data[0];
    for(unsigned int i = 1; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *data, unsigned int length) {
    unsigned char min = data[0];
    for(unsigned int i = 1; i < length; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

void sort_array(unsigned char *data, unsigned int length) {
    for(unsigned int i = 0; i < length - 1; i++) {
        for(unsigned int j = 0; j < length - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                unsigned char temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int main() {
    unsigned char data[SIZE];
    unsigned int input;

    printf("Enter 8 unsigned integers (0–255):\n");

    for (unsigned int i = 0; i < SIZE; i++) {
        printf("Value %u: ", i + 1);
        scanf("%u", &input);

        if (input > 255) {
            printf("Error: Value must be between 0 and 255.\n");
            return 1;
        }

        data[i] = (unsigned char)input;
    }

    print_array(data, SIZE);
    print_statistics(data, SIZE);

    return 0;
}