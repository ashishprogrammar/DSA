class Solution {
public:
    int findNthDigit(int n) {
        long long digit=1,total=0,base=9;
        while(total+digit*base<n){
            total+=digit*base;
            base*=10;
            digit++;
        }
        n-=total;
        int num= pow(10,digit-1);
        num+=(n-1)/digit;
        int index = (n-1)%digit;
        string s = to_string(num);
        return s[index]-'0';
    }
};
