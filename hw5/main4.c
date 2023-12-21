#include <stdio.h>

int N(int num) {
    int thousands = (num / 1000) % 10;
    int ones = num % 10;

    return num - (thousands * 1000) + (ones * 1000) + (thousands - ones);
}

int main() {
    int num = 1;
    int swappedNum = N(num);

    printf("對調後數字為：%d\n", swappedNum);

    return 0;
}
