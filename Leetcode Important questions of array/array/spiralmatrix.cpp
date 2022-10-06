class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int> ans;
    int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1,dir=0;
    while(top<=bottom && left<=right){
        if(dir==0){  //left to right
            for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        }
        else if(dir==1){ //top to bottom
            for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        }
        else if(dir==2){ //right to left
            for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        else if(dir==3){  //bottom to top
            for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
            }
        left++;
        }
        dir=(dir+1)%4; //changing direction
    }

    return ans;  
    }
};