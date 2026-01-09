#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    long long n = num;
    int count = 0;
    while (n != 1) {
        count++;             // 반복할 때마다 무조건 증가
        if (count > 500)     // 500회 초과 즉시 -1
            return -1;

        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    return count;
}