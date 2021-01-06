#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

string g_numbers;
vector<int> v;
vector<bool> g_checked;

void func(string num, int idx, int left) {
    g_checked[idx] = true;
    if (left == 0) {
        v.push_back(stoi(num));
        return;
    }
    for (int i = 0; i < g_numbers.size(); i++) {
        if (!g_checked[i]) {
            func(num + g_numbers[i], i, left-1);
            g_checked[i] = false;
        }
    }
}

int solution(string numbers) {
    int answer = 0, i, j, size=numbers.size();
    vector<bool> prime;
    vector<bool> checked(size, false);
    
    sort(numbers.begin(),numbers.end());
    g_numbers = numbers;
    
    //숫자 만들어 저장
    for (i=0; i<size; i++) {
        for(j=0; j<size; j++){
            if (numbers[j] != 0) {
                g_checked = checked;
                func(string(1, numbers[j]), j, i);
            }
        }
    }
    
    //정렬 후 중복 제거
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    //소수 찾기
    for(int n:v){
        int cnt=0;
        if(n<2) continue;
        for(i=2; i<=sqrt(n); i++){
            if(n%i==0) cnt++;
        }
        if(cnt==0) answer++;
    }
    return answer;
}
