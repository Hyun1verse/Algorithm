#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) 
{
    for (int i = 0; i < seoul.size(); i++)  // 배열 순회
    {
        if (seoul[i] == "Kim")  // 순회하며 Kim 인지 확인
        {
            // 결과 문자열 생성 후 반환
            return "김서방은 " + to_string(i) + "에 있다";
        }
    }
}