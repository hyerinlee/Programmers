#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    const int num=n;
    for(int i=0; i<n; i++){
        answer.push_back(bitset<16>(arr1[i]|arr2[i]).to_string());
        answer[i].erase(0,16-n);
        for(int j=0; j<n; j++){
            answer[i][j] = (answer[i][j]=='1')? '#':' ';
        }
    }
    return answer;
}
