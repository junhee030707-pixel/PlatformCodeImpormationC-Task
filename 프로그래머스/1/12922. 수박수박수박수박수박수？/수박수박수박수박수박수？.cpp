#include <string>
#include <vector>

using namespace std;

string solution(int n)
{
    string sum = "";

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            sum += "수";
        else
            sum += "박";
    }

    return sum;
}