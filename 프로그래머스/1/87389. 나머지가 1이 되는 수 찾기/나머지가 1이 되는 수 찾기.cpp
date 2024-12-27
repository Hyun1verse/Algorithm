#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int x = 1; n > x; x++)
    {
        if (n % x == 1){
            
            return x;
        }
    }        
}