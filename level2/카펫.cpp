#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown/2 + 2;
    for(int i=3; i<sum; i++){
        if(((i-2)*(sum-i-2))==yellow){
            (i>sum-i)? answer.push_back(i) : answer.push_back(sum-i);
            answer.push_back(sum-answer[0]);
            return answer;
        }
    }
}
