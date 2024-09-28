#include <iostream>
#include "math_lib.h"

void testFibonacci() {
    // ����� ��� ������� Fibonacci
    std::cout << "���������� ������� Fibonacci:\n";

    // ���� 1
    if (fibonacci(0) == 0) {
        std::cout << "���� 1 ��������: fibonacci(0) = 0\n";
    }
    else {
        std::cout << "���� 1 �� ��������: fibonacci(0) != 0\n";
    }

    // ���� 2
    if (fibonacci(1) == 1) {
        std::cout << "���� 2 ��������: fibonacci(1) = 1\n";
    }
    else {
        std::cout << "���� 2 �� ��������: fibonacci(1) != 1\n";
    }

    // ���� 3
    if (fibonacci(5) == 5) {
        std::cout << "���� 3 ��������: fibonacci(5) = 5\n";
    }
    else {
        std::cout << "���� 3 �� ��������: fibonacci(5) != 5\n";
    }

    // ���� 4
    if (fibonacci(10) == 55) {
        std::cout << "���� 4 ��������: fibonacci(10) = 55\n";
    }
    else {
        std::cout << "���� 4 �� ��������: fibonacci(10) != 55\n";
    }

    // ���� 5
    if (fibonacci(15) == 610) {
        std::cout << "���� 5 ��������: fibonacci(15) = 610\n";
    }
    else {
        std::cout << "���� 5 �� ��������: fibonacci(15) != 610\n";
    }
}

int main() {
    testFibonacci();
    return 0;
}
