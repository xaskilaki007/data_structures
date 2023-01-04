//10. Робот-самолёт описывается как структура с полями: скорость вращения винта,
//радиус винта, коэффициент тяги. Напишите функцию для расчёта тяги,
//создаваемую винтом (произведение всех характеристик).
#include <iostream>

struct Robot
{
    float radius;
    float speed;
    float k;
    float thrust;

};

void RobotInput(Robot &bot)
{
    std::cout << "Please enter robot wint radius: ";
    std::cin >> bot.radius;
    std::cout << std::endl;

    std::cout << "Please enter robot speed: ";
    std::cin >> bot.speed;
    std::cout << std::endl;

    std::cout << "Please enter robot k of thrust: ";
    std::cin >> bot.k;
    std::cout << std::endl;
}

void RobotData(Robot &bot)
{
    bot.thrust = bot.radius * bot.speed * bot.k;
}

void RobotInfo(Robot bot)
{
    std::cout << "\t---Robot INFO----" << std::endl;
    std::cout << "Radius of wint: " << bot.radius << "\t Speed: " << bot.speed << std::endl;
    std::cout << "Robot k: " << bot.k << "\t\t Thrust: " << bot.thrust << std::endl;
}

int main()
{
    Robot drone;
    RobotInput(drone);
    RobotData(drone);
    RobotInfo(drone);

    return 0;
}
