#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) 
{   
    int answer = 0; // 합계를 저장할 변수 초기화
    int index = 0;  // 인덱스를 추적할 변수
    
    for (int value : absolutes) // absolutes 배열의 요소를 순회
    {
        // signs[index]가 true면 양수, false면 음수로 처리
        answer += signs[index] ? value : -value;
        ++index;    // 다음 index로 이동
    }
    
    return answer;
}
