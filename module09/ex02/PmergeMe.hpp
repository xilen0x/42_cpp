/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:35:20 by castorga          #+#    #+#             */
/*   Updated: 2024/10/29 12:35:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#define RESET		"\033[0m"
#define RED			"\033[31m"				/* Red */
#define GREEN		"\033[32m"				/* Green */
#define YELLOW		"\033[33m"				/* Yellow */
#define BLUE		"\033[34m"	
#define BG_RED		"\033[41m"				/* Red */
#define BG_GREEN	"\033[42m"				/* Green */
#define BG_ORANGE	"\033[43m"				/* Yellow */

#include <vector>
#include <deque>
#include <iostream>
#include <iomanip>

template <typename T>
void insertionSort(T &container)
{
	unsigned int currentValue;
	int previousIndex;

    for (unsigned int currentIndex = 0; currentIndex < container.size(); currentIndex++)
    {
        currentValue = container[currentIndex];
        previousIndex = currentIndex - 1;
        while (previousIndex >= 0 && currentValue < container[previousIndex])
        {
            container[previousIndex + 1] = container[previousIndex];
            previousIndex--;
        }
        container[previousIndex + 1] = currentValue;
    }
}

template <typename T>
void merge(T &container, int startIndex, int middleIndex, int endIndex)
{
	int leftIndex;
	int rightIndex;
	int tempIndex;

    T temporaryArray(endIndex - startIndex + 1);
    leftIndex = startIndex;
	rightIndex = middleIndex + 1;
	tempIndex = 0;
    while (leftIndex <= middleIndex && rightIndex <= endIndex) 
    {
        if (container[leftIndex] <= container[rightIndex])
            temporaryArray[tempIndex++] = container[leftIndex++];
        else
            temporaryArray[tempIndex++] = container[rightIndex++];
    }
    while (leftIndex <= middleIndex)
        temporaryArray[tempIndex++] = container[leftIndex++];
    while (rightIndex <= endIndex)
        temporaryArray[tempIndex++] = container[rightIndex++];
    for (int copyIndex = 0; copyIndex < tempIndex; copyIndex++)
        container[startIndex + copyIndex] = temporaryArray[copyIndex];
}

template <typename T>
void mergeSort(T &container, int beginIndex, int endIndex)
{
    int middleIndex;

    if ((endIndex - beginIndex) > 5)  //5 because insertion sort is faster for small arrays
    {
        middleIndex = (beginIndex + endIndex) / 2;  // /2 because we need the middle index
        mergeSort(container, beginIndex, middleIndex);  //recursive call to the left side
        mergeSort(container, middleIndex + 1, endIndex);  //recursive call to the right side
        merge(container, beginIndex, middleIndex, endIndex);  //merge the two sides
    }
    else
        insertionSort(container);//if the array is small, use insertion sort
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

bool checkNumbers(int argc, char *argv[]);
std::vector<unsigned int> saveInVector(int argc, char *argv[]);
std::deque<unsigned int> saveInDeque(int argc, char *argv[]);