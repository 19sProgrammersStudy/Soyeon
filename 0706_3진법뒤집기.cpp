#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    vector<int>::iterator iter;
    
    while(n>=3){
        v.push_back(n%3);
        n/=3;
    }
    v.push_back(n);
    int s = v.size()-1;
    for(iter=v.begin();iter!=v.end();iter++){
        answer+=(*iter * pow(3,s));
        s--;
    }
    return answer;
}

//자연수 n이 매개변수로 주어집니다. n을 3진법 상에서 앞뒤로 뒤집은 후, 이를 다시 10진법으로 표현한 수를 return 하도록 solution 함수를 완성해주세요.
