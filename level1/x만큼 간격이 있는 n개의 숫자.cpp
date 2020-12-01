#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    answer.push_back(x);
    for(int i=1;i<n;i++){
        answer.insert(answer.begin()+i, answer[i-1]+x);
    }
    return answer;
}
