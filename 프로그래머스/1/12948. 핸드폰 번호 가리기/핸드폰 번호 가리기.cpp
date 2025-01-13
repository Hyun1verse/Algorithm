#include <string>

using namespace std;

string solution(string phone_number) 
{
    int num = phone_number.length() - 4;    // 뒷 4자리 제외한 길이 계산

    string masked = string(num, '*');   // 뒷 4자리를 제외한 나머지를 '*'로 채우기

    string lastFour = phone_number.substr(num); // 뒷 4자리 가져오기

    return masked + lastFour;   // 가린 부분과 뒷 4자리 합치기
}
