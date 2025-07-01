/******************************************************************************
 * @file: stats.h
 * @brief: Header file for stats.c with function declarations
 *
 * Contains declarations and documentation for all functions used in the
 * statistical analysis program.
 *
 * Author: Zubair Iqbal
 * Date: July 1, 2025
 *****************************************************************************/

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints statistical data (min, max, mean, median) of an array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param length Number of elements in the array
 */
void print_statistics(unsigned char *data, unsigned int length);

/**
 * @brief Prints the contents of the array to the screen.
 *
 * @param data Pointer to the array of unsigned char data
 * @param length Number of elements in the array
 */
void print_array(unsigned char *data, unsigned int length);

/**
 * @brief Finds the median value in the array.
 *
 * Sorts the array and returns the median.
 *
 * @param data Pointer to the array of unsigned char data
 * @param length Number of elements in the array
 * @return Median value (unsigned char)
 */
unsigned char find_median(unsigned char *data, unsigned int length);

/**
 * @brief Finds the mean (average) of the array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param length Number of elements in the array
 * @return Mean value (unsigned char)
 */
unsigned char find_mean(unsigned char *data, unsigned int length);

/**
 * @brief Finds the maximum value in the array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param length Number of elements in the array
 * @return Maximum value (unsigned char)
 */
unsigned char find_maximum(unsigned char *data, unsigned int length);

/**
 * @brief Finds the minimum value in the array.
 *
 * @param data Pointer to the array of unsigned char data
 * @param length Number of elements in the array
 * @return Minimum value (unsigned char)
 */
unsigned char find_minimum(unsigned char *data, unsigned int length);

/**
 * @brief Sorts the array from largest to smallest.
 *
 * The zeroth element will be the largest value after sorting.
 *
 * @param data Pointer to the array of unsigned char data
 * @param length Number of elements in the array
 */
void sort_array(unsigned char *data, unsigned int length);

#endif /* __STATS_H__ */