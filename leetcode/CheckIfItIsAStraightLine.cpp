class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coor) {
        float x1=coor[0][0];
        float y1=coor[0][1];
        float x2=coor[1][0];
        float y2=coor[1][1];
        float slope=(y2-y1)/(x2-x1);
        for(int i=1;i<coor.size();i++){
            if((coor[i][1]-y1)/(coor[i][0]-x1)==slope) continue;
            else return false;
            }
        
        return true;
        
    }
};
