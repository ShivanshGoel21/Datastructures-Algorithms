class Solution {
public:
    
    void painting(int i,int j,vector<vector<int>>& image,int newcolor,int old_pixel){
    if(i>=0 && i<(image.size()) && j>=0 && j<(image[0].size()) && image[i][j]==old_pixel){
        image[i][j]=newcolor;
    painting(i-1,j,image,newcolor,old_pixel);
    painting(i+1,j,image,newcolor,old_pixel);
    painting(i,j-1,image,newcolor,old_pixel);
    painting(i,j+1,image,newcolor,old_pixel);
    } 
}
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
    int old_pixel=image[sr][sc];
        if(newcolor!=image[sr][sc])
        painting(sr,sc,image,newcolor,old_pixel);
        return image;
    }

};
