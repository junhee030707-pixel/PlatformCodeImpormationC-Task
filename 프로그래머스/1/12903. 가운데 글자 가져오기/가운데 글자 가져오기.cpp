#include <string>
using namespace std;

string solution(string s) {
    int n = s.length();

    if (n % 2 == 1) {
        // 홀수 → 가운데 1글자
        return s.substr(n / 2, 1);
    } else {
        // 짝수 → 가운데 2글자
        return s.substr(n / 2 - 1, 2);
    }
}