#include <iostream>
#include "math_lib.h"

int main() {
    int n;
    std::cout << "������ ����� Գ�������: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "����� Գ������� ��� " << n << " ������� " << result << std::endl;

    return 0;
}