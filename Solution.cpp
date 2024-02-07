class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int letterNum = (coordinates[0] - 'a') + 1;
        int digitNum = (coordinates[1] - '0');
        return (letterNum % 2 == digitNum % 2 == 0);
    }
};
