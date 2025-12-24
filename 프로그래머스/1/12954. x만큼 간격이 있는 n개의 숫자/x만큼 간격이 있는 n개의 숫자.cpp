#include <string>
#include <vector>
#define ll long long 
using namespace std;

vector<ll> solution(int x, int n) 
{
    vector<ll> answer(n);
    
    for(n=1; n <= answer.size(); n++) 
    {
    answer[n-1] = x * n; 
    }
    return answer;
}
    
    