#include <iostream> 
#include <cmath> 

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    double num1, num2;

    while (true) {
        std::cout << "Выбери операцию:\n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Умножение\n";
        std::cout << "4. Деление\n";
        std::cout << "5. Возведение в степень\n";
        std::cout << "6. Нахождение квадратного корня\n";
        std::cout << "7. Нахождение 1 процента от числа\n";
        std::cout << "8. Найти факториал числа\n";
        std::cout << "9. Выйти из программы\n";
        std::cout << "Выбери номер операции (1-9): ";
        std::cin >> choice;

        if (choice == 9) {
            std::cout << "Программа завершена.";
            break;
        }

        switch (choice) {
        case 1:
            std::cout << "Введи первое число: ";
            std::cin >> num1;
            std::cout << "Введи второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Введи первое число: ";
            std::cin >> num1;
            std::cout << "Введи второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "Введи первое число: ";
            std::cin >> num1;
            std::cout << "Введи второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << num1 * num2 << std::endl;
            break;
        case 4:
            std::cout << "Введи первое число: ";
            std::cin >> num1;
            std::cout << "Введи второе число: ";
            std::cin >> num2;
            if (num2 != 0) {
                std::cout << "Результат: " << num1 / num2 << std::endl;
            }
            else {
                std::cout << "Не могу делить на ноль)" << std::endl;
            }
            break;
        case 5:
            std::cout << "Введи число: ";
            std::cin >> num1;
            std::cout << "Введи степень: ";
            std::cin >> num2;
            std::cout << "Результат: " << pow(num1, num2) << std::endl;
            break;
        case 6:
            std::cout << "Введи число: ";
            std::cin >> num1;
            if (num1 >= 0) {
                std::cout << "Результат: " << sqrt(num1) << std::endl;
            }
            else {
                std::cout << "Не могу вычислить квадратный корень " << std::endl;
            }
            break;
        case 7:
            std::cout << "Введи число: ";
            std::cin >> num1;
            std::cout << "Результат: " << num1 / 100 << std::endl;
            break;
        case 8:
            std::cout << "Введи число: ";
            std::cin >> num1;
            double factorial = 1;
            if (num1 < 0) {
                std::cout << "Не могу найти факториал" << std::endl;
            }
            else {
                for (int i = 1; i <= num1; i++) {
                    factorial *= i;
                }
                std::cout << "Результат: " << factorial << std::endl;
            }
            break;


            std::cout << "Неверный номер операции." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}