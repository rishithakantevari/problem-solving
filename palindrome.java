class Solution {
    public boolean isPalindrome(int x) {
        int rem;
        int sum = 0;
        int num = x;

        while (x > 0) {
            rem = x % 10;
            sum = sum * 10 + rem;
            x = x / 10;
        }

        return sum == num;
    }
}
