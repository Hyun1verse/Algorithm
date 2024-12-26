#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float result = num1;
    result = result / num2;
    answer = result * 1000;
    return answer;
}