#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) {
        return {-1};
    }

    // 최소값 찾기
    int minVal = *min_element(arr.begin(), arr.end());

    // 최소값 위치 찾기
    auto it = find(arr.begin(), arr.end(), minVal);

    // 삭제
    arr.erase(it);

    return arr;
}