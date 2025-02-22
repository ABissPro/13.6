#include <iostream>
#include <vector>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int n;
    std::cout << "Введите длину вектора: ";
    std::cin >> n;
    std::vector<int> vec(n);
    std::cout << "Введите " << n << " целых чисел: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    int x;
    std::cout << "Введите значение х для удаления его из вектора: ";
    std::cin >> x;
    int count = 0;
    int i = 0;
    while (i < vec.size()) {
        if (vec[i] == x) {
            int del = vec[i];
            vec.erase(vec.begin() + i);
            //count++;
            //vec[i - count] = vec[i];
        }
        i++;
    }
    //vec.resize(vec.size() - count);
    std::cout << "Результат: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }

}

