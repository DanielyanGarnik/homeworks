#include <iostream>

void inputGrades(int grades[], int size) {
    std::cout << "Մուտքագրեք " << size << " ուսանողների գնահատականները (0-100 միջակայքում)։" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Ուսանող " << i + 1 << ": ";
        std::cin >> grades[i];

        while (grades[i] < 0 || grades[i] > 100) {
            std::cout << "Խնդրում ենք մուտքագրել գնահատական 0-100 միջակայքում: ";
            std::cin >> grades[i];
        }
    }
}

void displayGrades(const int grades[], int size) {
    std::cout << "Ուսանողների գնահատականները՝ " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Ուսանող " << i + 1 << ": " << grades[i] << std::endl;
    }
}

double calculateAverage(const int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += grades[i];
    }
    return static_cast<double>(sum) / size;
}

int findHighestGrade(const int grades[], int size) {
    int highest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

int findLowestGrade(const int grades[], int size) {
    int lowest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

void sortGrades(int grades[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }
}



int main() {
    const int SIZE = 5;
    int grades[SIZE];

    inputGrades(grades, SIZE);

    displayGrades(grades, SIZE);

    double average = calculateAverage(grades, SIZE);
    std::cout << "Միջին գնահատականը՝ " << average << std::endl;

    int highest = findHighestGrade(grades, SIZE);
    std::cout << "Ամենաբարձր գնահատականը՝ " << highest << std::endl;

    int lowest = findLowestGrade(grades, SIZE);
    std::cout << "Ամենացածր գնահատականը՝ " << lowest << std::endl;

    sortGrades(grades, SIZE);
    std::cout << "Դասավորված գնահատականները՝ " << std::endl;
    displayGrades(grades, SIZE);

    

    return 0;
}
