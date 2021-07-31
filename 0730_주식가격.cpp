//주식가격
//https://programmers.co.kr/learn/courses/30/lessons/42584?language=cpp

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(),0);
    
    for(int i=0;i<prices.size();i++){
        for(int j=i+1;j<prices.size();j++){
            if(prices[i]<=prices[j]){
                answer[i]+=1;
            }else{
                answer[i]+=1;
                break;
            }
        }
    }
    
    return answer;
}
