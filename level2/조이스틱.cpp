#include <string>
#include <vector>

using namespace std;

int Counting(string name, int dir, int cur_idx) {
    int index = cur_idx;
    int cnt = 0;

    do {
        cnt++;
        index += dir;
        if (index < 0 || index >= name.length()) index += -dir * name.length();
    } while (name[index] == 'A' && index != cur_idx);

    return cnt;
}

int solution(string name) {
    int answer = 0;
    int cnt = 0;

    for (auto& c : name) if (c != 'A') cnt++;

    int cur_idx = 0;
    while (0 <= cnt) {
        if (name[cur_idx] != 'A') {
            answer += ((name[cur_idx] < 'N') ? name[cur_idx] - 'A' : 'Z' - name[cur_idx] + 1);
            name[cur_idx] = 'A';
            cnt--;
        }
        if (cnt == 0) break;

        int left_cnt, right_cnt;
        left_cnt = Counting(name, -1, cur_idx);
        right_cnt = Counting(name, 1, cur_idx);

        if (left_cnt < right_cnt) {
            cur_idx -= left_cnt;
            if (cur_idx < 0) cur_idx += name.length();
            answer += left_cnt;
        }
        else {
            cur_idx += right_cnt;
            if (cur_idx >= name.length()) cur_idx -= name.length();
            answer += right_cnt;
        }
    }

    return answer;
}