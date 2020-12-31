#include <string>

using namespace std;

string solution(string number, int k) {
    while(k-->0){
        int erase_idx = 0;
        while(erase_idx<number.size()-1){
            if(number[erase_idx]<number[erase_idx+1]) break;
            else erase_idx++;
        }
        number.erase(number.begin()+erase_idx);
    }
    return number;
}
