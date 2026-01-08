#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) 
{
    long long sum = 0;

    int start = min(a, b);
    int end = max(a, b);

    for (int i = start; i <= end; i++) 
    {
        sum += i;
    }
    return sum;
}