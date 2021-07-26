//쿼드압축 후 개수 세기
//https://programmers.co.kr/learn/courses/30/lessons/68936?language=cpp

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> v;
vector<int> answer={0,0};

void cal(int x,int y,int N){
    int tmp = v[x][y];
    bool chk=true;
    for(int i=x;i<x+N;i++){
        for(int j=y;j<y+N;j++){
            if(v[i][j]!=tmp){
                chk=false;
                break;
            }
        }
    }if(chk){
        answer[tmp]++;
        return;
    }else{
        cal(x,y,N/2);
        cal(x,y+N/2,N/2);
        cal(x+N/2,y,N/2);
        cal(x+N/2,y+N/2,N/2);
    }
}

vector<int> solution(vector<vector<int>> arr) {
    v=arr;
    cal(0,0,arr.size());
    
    return answer;
}
