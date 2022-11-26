#include <iostream>
#define LINE 9
using namespace std;
class Chess {
private:
    bool flag = false;
    int units[LINE][LINE];
public:
    Chess(){
        for(auto & unit : units)
            for(int i : unit)
                i = 0;
    }

    bool check(int row, int col, int num){
        int blockRow = row / 3 * 3;
        int blockCol = col / 3 * 3;
        if(units[row][col])
            return false;
        for(auto & unit : units)
            for(int j = 0; j < LINE; j++)
                if(units[row][j] == num || unit[col] == num)
                    return false;
        for(int i = blockRow; i < blockRow+3; i++)
            for(int j = blockCol; j < blockCol+3; j++)
                if(units[i][j] == num)
                    return false;
        return true;
    }

    void input(){
        char ch;
        for(auto & unit : units)
            for(int & j : unit){
                cin >> ch;
                if(ch == ' ') continue;
                else j = ch - '0';
            }
    }

    void output(){
        cout << "-----------------------" << endl;
        for(int i = 0; i < LINE; i++) {
            for (int j = 0; j < LINE; j++) {
                cout << units[i][j] << ' ';
                if(j % 3 == 2) cout << "| ";
            }
            cout << endl;
            if(i % 3 == 2)
                cout << "-----------------------" << endl;

        }
    }

    void dfs(int row, int col){
        if(row==LINE) {
            flag = true;
            return;
        }
        else if(units[row][col] > 0)
            dfs(row + (col + 1) / LINE, (col + 1) % LINE);
        for(int i = 1; i <= LINE; i++){
            if(!check(row, col, i)) continue;
            units[row][col] = i;
            dfs(row + (col + 1) / LINE, (col + 1) % LINE);
            if(flag) return ;
            units[row][col] = 0;
        }
    }
};

int main(){
    Chess chess;
    chess.input();
    chess.dfs(0, 0);
    chess.output();
    system("pause");

    FILE file;
}