/* 29. Divide Two Integers
 * Divide two integers without using multiplication, division and mod operator.
 *
 * If it is overflow, return MAX_INT.
 */

class Solution {
  public:
    int divide(int dividend, int divisor) {
      if (divisor == 0) return NAN;
      if (divisor == INT_MIN) return dividend == INT_MIN;
      int isNeg = (dividend > 0) ^ (divisor > 0);
      unsigned uDividend = dividend == INT_MIN ? INT_MIN : abs(dividend);
      unsigned uDivisor = abs(divisor);
      unsigned index = 1, result = 0, d = uDivisor;
      while (uDividend >= d) {
        index = 1;
        uDivisor = d;
        while (uDividend >= uDivisor && uDivisor < INT_MIN) {
          index <<= 1;
          uDivisor <<= 1;
        }
        result += index >> 1;
        uDividend -= uDivisor >> 1;
      }
      if (isNeg) return -result;
      if (result == INT_MIN) return INT_MAX;
      return result;
    }
};
