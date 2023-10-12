// lab10_new57_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    int n;
    int count = 0;
    
    cout << "Enter lenght of list:" << endl;
    cin >> n;
    float* list = new float[n];
    double* listOfS = new double[n];
    
    for (int i = 0; i < n; i++) {
        float currentNum = 0;
        cin >> currentNum;
        list[i] = currentNum;
    }

    
    for (int i = 0; i <= (n - 3); i++) {
        if (((list[i] + list[i + 1]) > list[i + 2]) and ((list[i + 2] + list[i + 1]) > list[i]) and ((list[i] + list[i + 2]) > list[i + 1]) ) {
            double p = (list[i] + list[i + 1] + list[i + 2]) / 2.;
            listOfS[count] = sqrt(p*(p - list[i])*(p - list[i + 1])*(p - list[i + 2]));
            count += 1;
        }
    }
  

    for (int i = 0; i < count; i++) {

        for (int j = 0; j < (count-1); j++) {

            if (listOfS[j] > listOfS[j + 1]) {
                double temp = listOfS[j];
                double temp2 = listOfS[j+1];

                listOfS[j] = temp2;
                listOfS[j + 1] = temp;
            }
        }

        for (int k = 0; k < (count); k++) {

            if (k == (count - 1)) {
                cout << listOfS[k] << endl;
            }
            else {
                cout << listOfS[k] << "\t";
            }

        }
    }
    delete[] list;
    delete[] listOfS;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
