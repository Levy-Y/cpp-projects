#include <iostream>

using namespace std;

int absNumList[5];

void getAbsSum(int absNumList[5]) {
    int summedNums{};
    for (int i = 0; i < 5; i++) {
        summedNums += absNumList[i];
    }
    cout << summedNums;
}

int main()
{
    cout << "Ajd meg 5 altalad valasztott pozitiv vagy negativ szamot:\n";
    for (int i = 0; i < 5; i++) {
        int cacheVar;
        cin >> cacheVar;
        cacheVar = abs(cacheVar);
        absNumList[i] = cacheVar;
    }
    getAbsSum(absNumList);
}
