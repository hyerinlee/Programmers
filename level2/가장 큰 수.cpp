#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(string a, string b){
    return a+b > b+a;
}
string solution(vector<int> numbers) {
    vector<string> numstr;
    string answer = "";
    for(int i:numbers){
        numstr.push_back(to_string(i));
    }
    sort(numstr.begin(), numstr.end(), compare);
    for(string num:numstr){
        answer+=num;
    }
    return (answer>"1")? answer:"0";
}
