class Solution {
  public:
    int nthTermOfAP(int A1, int A2, int N) {
        // code here
        int diff=A2-A1;
        int last;
        last=A1+(N-1)*diff;
        return last;
    }
};
