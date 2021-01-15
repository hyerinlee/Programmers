#include <string>
#include <vector>

using namespace std;

int answer = 0;
string g_name, g_origin = "";

void func(int idx) {
    int dLeft = 0, dRight = 0, iLeft = idx, iRight = idx;
    g_origin[idx] = g_name[idx];

    //A는 0번, B(1)-N(13)까지는 위로, O(12)-Z(1)까지는 아래로
    if (g_origin[idx] <= 'N') answer += g_origin[idx] - 'A';
    else answer += 'Z' - g_origin[idx] + 1;

    if (g_origin == g_name) return;

    //왼쪽과 오른쪽 중 다음 변경할 알파벳이 더 가까운 쪽으로 이동
    while (g_origin[iRight] == g_name[iRight]) {
        iRight = (++iRight) % g_name.size();
        dRight++;
    }
    while (g_origin[iLeft] == g_name[iLeft]) {
        if (--iLeft< 0) iLeft += g_name.size();
        dLeft++;
    }
    if (dLeft < dRight) {
        answer += dLeft;
        func(iLeft);
    }
    else {
        answer += dRight;
        func(iRight);
    }
}

int solution(string name) {
    g_name = name;
    for (int i=0; i < name.size(); i++) g_origin += "A";
    func(0);
    return answer;
}
