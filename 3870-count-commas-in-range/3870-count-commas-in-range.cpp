class Solution {
public:
    int countCommas(int n) {
        int commas =0;
        while(n>=1000){
            commas++;
             n=n-1;

        }
        return commas;
    }
};