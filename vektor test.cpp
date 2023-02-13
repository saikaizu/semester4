#include <algorithm>
#include <vector>
#include <cmath>
 
int solution(std::vector<int> &A) {
    int N = A.size();
    std::sort(A.begin(), A.end());
    int i = 1;
    for (int j = 0; j < N; ++j) {
        if (A[j] > 0 && A[j] == i) {
            i++;
        } else if (A[j] > 0 && A[j] > i) {
            break;
        }
    }
    return i;
}

