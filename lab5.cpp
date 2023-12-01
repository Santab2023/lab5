#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

class Labs
{
public:
    float x, y;
    int mass[16]; // объявляем пременные

    double lab1(float x)
    {

        if (-6 >= x && x >= -7)
        { // отрезок от -7 до -6

            y = 1; // расчет у для заданного отрезка
        }
        else if (x <= -4)
        {                     // отрезок от -6 до -4
            y = -0.5 * x - 2; // расчет у для заданного отрезка
        }
        else if (x <= 0)
        {                                  // отрезок от -4 до 0
            y = sqrt(4 - pow((x + 2), 2)); // расчет у для заданного отрезка
        }
        else if (x <= 2)
        {                                     // отрезок от 0 до 2
            y = -sqrt((1) - pow((x - 1), 2)); // расчет у для заданного отрезка
        }
        else if (x <= 3)
        {               // отрезок от 2 до 3
            y = -x + 2; // расчет у для заданного отрезка
        }
        else
        {
            cout << "g";
        }
        return y;
    }
    int laboratornai1()
    {
        int xx;

        for (xx = -7; xx <= 3; xx++)
        {
            cout << lab1(xx) << "\n";
        }
        return 0;
    }

    double laboratornai2()
    {
        int i;
        for (i = 0; i <= 15; i++)
        {
            mass[i] = i + 1;
            cout << "mass=" << mass[i] << "\n";
        }
        return i;
    }


    int laboratornai3()
{
    ifstream fin("4.txt");  // вывод данных из файл
    ofstream fout("4.txt"); // ввод данных в файла
    string a;
    string b;
    double r, t;
    
    
    for (int r = -7; r < 3; r++)
    {
       t=lab1(r);
        fout << t << endl;
    }
    int l;
     fout.close();
    float *data = new float[l];
    l = 0;
    while (getline(fin, b))
    {
        data[l] = stof(b);
        l++;
    }
    for (int i = 0; i < l; i++)
        cout << data[i] << "\n";
    fin.close(); // закрываем файл
    return t;
}

};
int main()
{

    Labs lab4;
    lab4.laboratornai1();
    lab4.laboratornai2();
    lab4.laboratornai3();
    // устанавливаем значения полей класса

    // получаем значения полей

    // выводим полученные данные на консоль
}