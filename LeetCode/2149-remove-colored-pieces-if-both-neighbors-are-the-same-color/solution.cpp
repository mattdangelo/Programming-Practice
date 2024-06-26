class Solution {
public:
    bool winnerOfGame(string colors) {
        int difference = 0;

        for(int i=1;i<colors.length() - 1;i++) {
            if(colors[i-1] == 'A' && colors[i] == 'A' && colors[i+1] == 'A') {
                difference++;
            }
            else if(colors[i-1] == 'B' && colors[i] == 'B' && colors[i+1] == 'B') {
                difference--;
            }
        }

        return difference > 0;
    }
};
