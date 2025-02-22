#include <iostream>
#include <vector>

int main()
{
    std::vector<int> db;
    int num = 0;
    int count = 0;
 
    while (num != -1) {  
        std::cout << "Enter your number № " << count + 1 << " : ";
        std::cin >> num;
        if (num == -1) {
            break;
        }
        db.push_back(num);
        count++;
        if (count > 20) {
            db.erase(db.begin());
        }
    }

    for (int i = 0; i < db.size(); i++) {
        std::cout << db[i] << " ";
    }
}