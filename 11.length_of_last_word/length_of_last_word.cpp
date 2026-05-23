class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Bỏ qua khoảng trắng ở cuối
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Đếm độ dài từ cuối cùng
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};