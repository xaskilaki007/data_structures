/*
2. Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
мнимая части. Объявите два числа и получите их значения от пользователя.
c. Напишите функцию, которая будет возвращать тоже самое число в
тригонометрической форме.
*/

#include <iostream>
#include <cmath>

//define 1 3.14
//#define _USE_MATH_DEFINES
using namespace std;
struct Number
{
    float reality;
    float imaginary;
};

struct trigNumber
{
    float module;
    float corner;
};

void NumberInput(Number &num)
{
    std::cout << "Please enter reality part of complex number: ";
    std::cin >> num.reality;
    std::cout << std::endl;

    std::cout << "Please enter imaginary part of complex number: ";
    std::cin >> num.imaginary;
    std::cout << std::endl;

}
float module(Number num)
{
    return std::sqrt(num.reality * num.reality + num.imaginary * num.imaginary);
}

trigNumber toTrigForm(Number num)
{
    trigNumber t;
    t.module = module(num);
    t.corner = atan(num.imaginary/num.reality);
    if (num.reality < 0) t.corner += M_PI;
    return t;
}

void printTrigForm(trigNumber num)
{
    cout << num.module << "(cos" << num.corner << " + isin" << num.corner << ")\n";
}

int main()
{
    Number num_1;
    NumberInput(num_1);
    
    trigNumber tn = toTrigForm(num_1);
    printTrigForm(tn);
    
    return 0;
}