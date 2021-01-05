#include <vector>

using namespace std;

int t, answer=0;
vector<int> v_num;

void func(int sum, int idx){
    if(idx<v_num.size()-1){
        idx++;
        func(sum+v_num[idx],idx);
        func(sum-v_num[idx],idx);
    }
    else {
        if(sum==t) answer++;
        return;
    }
}

int solution(vector<int> numbers, int target) {
    t=target;
    v_num=numbers;
    func(v_num[0],0);
    func(-v_num[0],0);
    return answer;
}
