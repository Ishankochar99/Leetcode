class Solution {
public:
    string minRemoveToMakeValid(string s) {
	int top = 0;
	string res = "";
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i])) {
			res.push_back(s[i]);
			continue;
		}
		if (s[i] == '(') {
			top++;
			res.push_back(s[i]);
		} else if (s[i] == ')' && top > 0) {
			top--;
			res.push_back(s[i]);
		}
	}
	string temp = res;
	res = "";
	top = 0;
	for (int i = temp.size() - 1; i >= 0; i--) {
		if (isalpha(temp[i])) {
			res.push_back(temp[i]);
			continue;
		}
		if (temp[i] == ')') {
			top++;
			res.push_back(temp[i]);
		} else if (temp[i] == '(' && top > 0) {
			top--;
			res.push_back(temp[i]);
		}
	}
	reverse(res.begin(), res.end());
	return res;
}
};
