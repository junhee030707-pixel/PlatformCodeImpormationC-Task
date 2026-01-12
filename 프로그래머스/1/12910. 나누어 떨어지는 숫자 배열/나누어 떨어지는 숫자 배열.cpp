#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) 
{
    vector<int> result;

    for (int i = 0; i < arr.size(); i++) 
    {
        if (arr[i] % divisor == 0)
        {
            result.push_back(arr[i]);
        }
    }

    if (result.empty())
    {
        result.push_back(-1);
        return result;
    }

    sort(result.begin(), result.end());
    return result;
}
