using namespace std;

int solution(int n) {
    int answer = 0;
    double num;
    
    for(int i=1; i*(i+1)/2<=n ; i++){
        num=(n - ( ((double)i-1)*(double)i/2 ))/(double)i;
        if( num-(int)num == 0 ) answer++;
    }
    
    return answer;
}

/*
-풀이과정-
num부터 시작하여 i개의 연속된 수의 합은 i*num + (i-1)! 이다. 즉 i*num + ( (i-1)*i/2 ).
이때 각 i에 대하여 위 식이 n이 되는, 그러니까 i*num + ( (i-1)*i/2 ) = n 을 만족하는 자연수 num이 존재하면 answer++ 해준다.
식을 정리하면 num = (n - ( (i-1)*i/2 ) ) / i.
일단 식을 계산한 후에 자연수인지 판별한다.

반복문에서 i의 최대범위는 1~i까지 더한 총합이 n보다 같거나 작은 것까지이다. (연속된 i개 수의 합의 최소는 1+2+...+i 이므로)
즉 식으로 나타내면 i(i+1)/2<=n 이다.
*/
