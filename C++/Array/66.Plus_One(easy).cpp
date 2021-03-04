class Solution {
public:
    /*
    给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
    1. 将该数组反转，编程从低位到高位的顺序；
    2. 进行加1运算，其中，定义flag变量用于记录是否进位，其中运算到最后如果flag等于1，说明答案数组比原始数组多1位，需要push_back(1)；
    3. 将结果数组反转；
    */
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size();
        int carry = 1;//进位，初试值模拟个位进1
        for (int i = sz-1; i >= 0; --i)
        {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
            if(carry==0)
                break;
            if(i==0)
                digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};
