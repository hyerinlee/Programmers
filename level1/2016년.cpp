#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> weekday = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    vector<int> days = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 5;    //금요일
    for(int i=1; i<a; i++) sum+=days[i-1];
    sum = sum+b-1;
    answer = weekday[sum%7];
    return answer;
}
