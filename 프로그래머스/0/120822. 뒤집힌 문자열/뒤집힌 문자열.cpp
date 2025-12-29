#include <string>
#include <vector>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    answer.resize(my_string.size());
    for(int i=0; i<my_string.size(); i++) 
    {
       answer[my_string.size()-i-1] =my_string[i];
    }
    return answer;
}