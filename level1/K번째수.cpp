#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> c_arr;

    for (auto& c : commands) {
        c_arr.clear();
        c_arr.assign(array.begin() + (c[0] - 1), array.begin() + (c[1]));
        sort(c_arr.begin(), c_arr.end());
        answer.push_back(c_arr[c[2] - 1]);
    }

    return answer;
}