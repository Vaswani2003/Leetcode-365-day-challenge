class Solution {
public:
    string convert(string s, int Rows) {

        if(Rows>=s.length() || Rows == 1)   return s;
        
        int step = 1, row = 1, i;
        map<int, vector<char>> table;
        string ans = "";

        for(auto ch: s){
            table[row].push_back(ch);

            if(row==1){
                step = 1;
            }
            else if(row==Rows){
                step = -1;
            }

            row += step;
        }

        for(i=1;i<=Rows;i++){
            string str(table[i].begin(),table[i].end());
            ans += str;
        }

        return ans;
    }
};
