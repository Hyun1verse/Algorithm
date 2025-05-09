using namespace std;

long long solution(int price, int money, int count) {
    long long totalCost = 0;
    
    for (int i = 1; i <= count; ++i) {
        totalCost += (long long)price * i;
    }

    return totalCost > money ? totalCost - money : 0;
}
