class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        if (tx < sx || ty < sy) return false;
        if (tx == sx && ty == sy) return true;

        if (tx > ty) {
            if (sy == ty)    
                return sx >= (tx % ty) && (tx - sx) % sy == 0;
            return reachingPoints(sx, sy, tx % ty, ty);
        }
        else{
            if (sx == tx)    
                return sy >= (ty % tx) && (ty - sy) % sx == 0;
            return reachingPoints(sx, sy, tx, ty % tx);
        }
    }
};

