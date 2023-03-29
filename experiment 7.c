#include <stdio.h>

void unionSets(int set1[], int size1, int set2[], int size2, int resultSet[], int *resultSize) {
    // loop through set1 and add all its elements to resultSet
    for (int i = 0; i < size1; i++) {
        resultSet[i] = set1[i];
    }
    *resultSize = size1;

    // loop through set2 and add any elements not already in resultSet
    for (int i = 0; i < size2; i++) {
        int element = set2[i];
        int found = 0;
        for (int j = 0; j < *resultSize; j++) {
            if (resultSet[j] == element) {
                found = 1;
                break;
            }
        }
        if (!found) {
            resultSet[*resultSize] = element;
            (*resultSize)++;
        }
    }
}

void intersectSets(int set1[], int size1, int set2[], int size2, int resultSet[], int *resultSize) {
    *resultSize = 0;

    // loop through set1 and check if each element is also in set2
    for (int i = 0; i < size1; i++) {
        int element = set1[i];
        for (int j = 0; j < size2; j++) {
            if (set2[j] == element) {
                resultSet[*resultSize] = element;
                (*resultSize
