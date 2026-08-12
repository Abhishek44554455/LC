class Solution {
public:
vector<int>getLeftMax(vector<int>arr,int n){
    vector<int>leftMax(n);
     leftMax[0]=arr[0];
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],arr[i]);
    }
    return leftMax;
}
vector<int>getRightMax(vector<int>arr,int n){
    vector<int>rightMax(n);
     rightMax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],arr[i]);
    }
    return rightMax;
}
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftMax=getLeftMax(height,n);
        vector<int>rightMax=getRightMax(height,n);
        int sum=0;
        for(int i=1;i<n-1;i++){
            int h=min(leftMax[i],rightMax[i])-height[i];
            sum+=h;
        }
        return sum;
    }
};