#include <iostream>
const int size = 5;
void highbubbleSort(int grades[30], int size) {
    bool s;
    for (int i = 0; i <  size - 1; i++) {
        s = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
                s = true;
            }
        }
        if (!s) break;
    }
}
void lowbubbleSort(int grades[30], int size) {
    bool s;
    for (int i = 0; i <  size - 1; i++) {
        s = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
                s = true;
            }
        }
        if (!s) break;
    }
}
int main(){

        int grades[30];
        lowbubbleSort(grades, size);
        highbubbleSort(grades, size);
}
