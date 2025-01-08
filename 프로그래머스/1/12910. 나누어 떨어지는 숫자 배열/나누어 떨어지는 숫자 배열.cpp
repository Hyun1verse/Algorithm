#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) 
{
    vector<int> answer; // 결과를 저장할 배열

    for (int i = 0; i < arr.size(); i++)    // 배열을 순회하며 조건 확인 
    {
        if (arr[i] % divisor == 0) 
        {
            answer.push_back(arr[i]);   // 나누어 떨어지면 추가
        }
    }
    
    if (answer.empty()) // 조건을 만족하는 값이 없다면 -1 추가
    {
        answer.push_back(-1);
    } 
    else 
    {
        sort(answer.begin(), answer.end()); // 결과를 오름차순 정렬
    }

    return answer;
}
