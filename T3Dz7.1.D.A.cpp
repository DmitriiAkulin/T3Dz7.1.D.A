// T3Dz7.1.D.A
#include <iostream>

#define MODE 1

#ifndef MODE
#error constant not defined
#endif

int main() {
    setlocale(LC_ALL, "rus");

#if (MODE == 0) 
std::cout << "Работаю в режиме тренировки\n";

#elif (MODE == 1) 
#define add(a,b) ((a) + (b))
    std::cout << "Работаю в боевом режиме\n";
    std::cout << "введите первое число : ";
    int a, b;
    std::cin >> a;
    std::cout << "введите второе число : "; std::cin >> b;
    std::cout << "результат сложения : " << add(a, b) << std::endl;   
    
#else 
std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
return 0;
}
