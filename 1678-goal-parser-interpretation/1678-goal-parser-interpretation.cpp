class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string v;
        for(int i=0;i<n;i++){
            if(command[i]=='G')
                v.push_back('G');
            else if(command[i]=='('){
                if (command[i+1]==')'){
                    v.push_back('o');
                } else{
                v.push_back('a');
                v.push_back('l');
            }
            }
        }
        return v;
    }
};