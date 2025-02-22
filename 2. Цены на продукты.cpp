#include <iostream>
#include <vector>

int main()
{
	system("chcp 1251"); // Установить кодировку
	std::vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };
	std::vector<int> items{ 1, 1, 2, 3, 3};
	float sum = 0;

	for (int i = 0; i < items.size(); i++) {
		if (items[i] < prices.size()) {
			sum += prices[items[i]];
		}
	}
	std::cout << "Суммарная стоимость будет равна: " << sum;
}

