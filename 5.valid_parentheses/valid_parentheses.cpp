class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Nếu là ngoặc mở -> push vào stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                // Nếu gặp ngoặc đóng mà stack rỗng -> sai
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                // Kiểm tra có khớp loại ngoặc không
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Hợp lệ nếu stack rỗng
        return st.empty();
    }
};