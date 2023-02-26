#include <vector>
using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    int d_last = -1, p_last = -1;
    
    for (int i = n - 1; i >= 0; i--) {
        if (deliveries[i]) {
            d_last = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (pickups[i]) {
            p_last = i;
            break;
        }
    }
    
    while (d_last >= 0 || p_last >= 0) {
        if (d_last >= p_last) {
            answer += (d_last + 1) * 2;
        }
        else {
            answer += (p_last + 1) * 2;
        }
        
        for (int tmp = -cap; d_last >= 0;) {
            deliveries[d_last] += tmp;
            if (deliveries[d_last] > 0) break;
            else if (deliveries[d_last] == 0) {
                for (d_last -= 1; d_last >= 0 && !deliveries[d_last]; d_last--);
                break;
            }
            else {
                tmp = deliveries[d_last];
                for (d_last -= 1; d_last >= 0 && !deliveries[d_last]; d_last--);
            }
        }
        
        for (int tmp = -cap; p_last >= 0;) {
            pickups[p_last] += tmp;
            if (pickups[p_last] > 0) break;
            else if (pickups[p_last] == 0) {
                for (p_last -= 1; p_last >= 0 && !pickups[p_last]; p_last--);
                break;
            }
            else {
                tmp = pickups[p_last];
                for (p_last -= 1; p_last >= 0 && !pickups[p_last]; p_last--);
            }
        }
    }
    
    return answer;
}