#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    int num = x;
    int sum = 0;

    while (num != 0) {
        sum += num % 10;  // 각 자리 숫자 합
        num /= 10;        // 한 자리 제거
    }

    return x % sum == 0;   // 나누어 떨어지면 하샤드 수
}