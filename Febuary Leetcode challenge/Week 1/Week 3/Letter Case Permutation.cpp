class Solution {
public:
    vector<string> letterCasePermutation( string S ) {
        vector<string> result;
        backtrace( S, 0, result );
        return result;
    }

private:
    void backtrace( string S, int i, vector<string> &result ) {
        if( i == S.length() ) {
            result.push_back( S );
            return;
        }
        if( 'a' <= S[i] && S[i] <= 'z' ) { // two branches if a letter
            backtrace( S, i + 1, result );
            S[i] = 'A' + S[i] - 'a';
            backtrace( S, i + 1, result );
        } else if ( 'A' <= S[i] && S[i] <= 'Z' ) { // two branch if a letter
            backtrace( S, i + 1, result );
            S[i] = 'a' + S[i] - 'A';
            backtrace( S, i + 1, result );
        } else { // one branch if a digit
            backtrace( S, i + 1, result );
        }

    }
};
