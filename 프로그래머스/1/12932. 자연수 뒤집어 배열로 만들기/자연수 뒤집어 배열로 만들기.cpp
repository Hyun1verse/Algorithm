#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) 
{
    vector<int> answer;
    
    while (n > 0)   // n이 0이 될 때까지 반복
    {
        int digit = n % 10; // n의 마지막 자릿수 가져오기
        answer.push_back(digit);    // 자릿수를 벡터에 추가
        n /= 10;    // n을 10으로 나눠 다음 자릿수 준비
    }
    
    return answer;
}