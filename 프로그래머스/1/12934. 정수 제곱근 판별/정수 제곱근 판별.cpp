#include <string>
#include <vector>

using namespace std;

long long solution(long long n) 
{
    for(long long x = 1; x*x<=n; x++)
    {
        if(x * x == n)
        {
        long long y = x + 1;
        return y * y;
        }
    }
    return -1;
}