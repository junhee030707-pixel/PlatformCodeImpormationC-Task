#include <string>
using namespace std;

int solution(string s) 
{
    int answer = stoi(s); //문자를 읽어서 숫자를 바꿈 => 배열이라서 캐스트 불가
    //static_cast 는 타입을 바꾸는것
    return answer;
}