#include <string>
#include <vector>
#include <bitset>

using namespace std;

//앞에 0이 있는 1 중에 가장 작은 1을 왼쪽으로 1칸 쉬프트하고 그 뒤에있는 1들은 모두 빼서 오른쪽부터 채워넣음
int solution(int n) {
    int answer = 0, one_num = 0, t;
    string num = "0"+bitset<20>(n).to_string();
    t=num.size()-1;
    for(int i=num.size()-1; i>0; i--){
        if(num[i]=='1' && num[i-1]=='0'){
            num[i]='0';
            num[i-1]='1';
            break;
        }
        else if(num[i]=='1'){
            num[i]='0';
            one_num++;
        }
    }
    while(one_num>0){
            num[t]='1';
            t--;
            one_num--;
    }
    t=1;
    for(int i=num.size()-1; i>0; i--){
        answer+=(num[i]-'0')*t;
        t*=2;
    }
    return answer;
}
