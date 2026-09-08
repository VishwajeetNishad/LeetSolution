class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int Srow=0,Erow=n-1;
        int Scol=0,Ecol=m-1;

        vector<int>temp;

        while(Srow<=Erow && Scol<=Ecol){
            //Top
            for(int j=Scol;j<=Ecol;j++){
               temp.push_back(matrix[Srow][j]);

            }
            //right
            for(int i =Srow+1;i<=Erow;i++){
                temp.push_back(matrix[i][Ecol]);

            }
            //bottom
            for(int j =Ecol-1;j>=Scol;j--){
                if(Srow==Erow){
                    break;
                }
                temp.push_back(matrix[Erow][j]);

            }
            //left
            for(int i =Erow-1;i>=Srow+1;i--){
                if(Scol==Ecol){
                    break;
                }
                temp.push_back(matrix[i][Scol]);

            }
            Srow++;
            Erow--;
            Scol++;
            Ecol--;

        }
        return temp;
    }
};