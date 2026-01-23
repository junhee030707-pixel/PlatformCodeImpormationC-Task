#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) 
{
    int answer = 0;

    for (int num = left; num <= right; num++)
    {
        int root = sqrt(num);

        if (root * root == num)
        {
            // 약수 개수 홀수 → 빼기
            answer -= num;
        }
        else
        {
            // 약수 개수 짝수 → 더하기
            answer += num;
        }
    }

    return answer;
}