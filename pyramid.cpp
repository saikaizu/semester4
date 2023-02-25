#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPyramidPossible(vector<int>& A) {
    sort(A.begin(), A.end());
    for(int i = 0; i < 3; i++) {
        if(A[4*i] != A[4*i+2] || A[4*i+1] != A[4*i+3]) {
            return false;
        }
    }
    if(A[0] != A[6] || A[2] != A[8] || A[4] != A[10]) {
        return false;
    }
    return true;
}

string solution(vector<int>& A) {
    if(A.size() != 12) {
        return "NO";
    }
    if(isPyramidPossible(A)) {
        return "YES";
    } else {
        swap(A[4], A[8]);
        if(isPyramidPossible(A)) {
            return "YES";
        }
        swap(A[4], A[8]);
        swap(A[5], A[9]);
        if(isPyramidPossible(A)) {
            return "YES";
        }
        swap(A[5], A[9]);
    }
    return "NO";
}

int main() {
std::vector<int> A(12);
A[0] = 4;
A[1] = 3;
A[2] = 3;
A[3] = 4;
A[4] = 1;
A[5] = 2;
A[6] = 2;
A[7] = 3;
A[8] = 6;
A[9] = 5;
A[10] = 4;
A[11] = 5;
    cout << solution(A) << endl;
    return 0;
}

