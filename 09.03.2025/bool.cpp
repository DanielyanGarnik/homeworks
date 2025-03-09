#include <iostream>
const int size = 5;
void highbubbleSort(int grades[30], int size) {
    bool swapped;
    for (int i = 0; i <  size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
void lowbubbleSort(int grades[30], int size) {
    bool swapped;
    for (int i = 0; i <  size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
int main(){

        int grades[30];
        lowbubbleSort(grades, size);
        highbubbleSort(grades, size);
}
