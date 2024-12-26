#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double size = arr.size();
    double answer = 0;

    for (size_t i = 0; i < size; i++)
    {
        answer += arr[i];
    }
    answer = answer / size;

    return answer;
}