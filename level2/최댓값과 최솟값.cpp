#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer="";
    stringstream ss;
    vector<int> num;
    int tmp;
    ss.str(s);
    while(ss >> tmp){
        num.push_back(tmp);
    }
    sort(num.begin(), num.end());
    answer=to_string(num.front())+" "+to_string(num.back());
    return answer;
}
