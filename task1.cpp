#include <iostream>
#include <fstream>
#include <cmath>


double log(double a, double b)
{
    return log(b) / log(a);
}



int main()
{
    setlocale(LC_ALL, "ru");

    std::ifstream f_input;
    std::ofstream f_output("R.txt");
    std::ofstream result("stepen.txt");

    std::cout << "Добро пожаловать в программу вычисления степени\n";
   
  
        double R;
        double a = 3;
        do
        {
            
            
            std::cout << "Введите значение R: ";
            std::cin >> R;

            f_output << R;
            f_output.close();

            f_input.open("R.txt");
            if (f_input.fail())
            {
                std::cout << "Не удалось открыть файл\n";
                return 1;
            }

            f_input >> R;
            f_input.close();

            result << "X = " << log(a, R);
            result.close();

            if (R <= 0)
            {
                std::cout << "Введите положительное значение R\n";
            }

            
                std::cout << "x = " << log(a, R) << '\n' << "Резкльтат записан в stepen.txt\n";

        } while (R <= 0);

    return 0;
    
}