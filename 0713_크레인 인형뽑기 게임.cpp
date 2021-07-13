#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> tmp;
    int d=0;
    for(int a=0;a<moves.size();a++){
        for(int i=0;i<board.size();i++){
            d=board[i][moves[a]-1];
            if(d!=0){
                board[i][moves[a]-1]=0;
                if(tmp.size()>0&&tmp[tmp.size()-1]==d){
                    tmp.pop_back();
                    answer+=2;
                }else{
                    tmp.push_back(d);
                }
                break;
            }
        }
    }
    return answer;
}
