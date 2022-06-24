vector<int> solve(Node* root){
        if(!root){
            vector<int> v(3);
            v[0] = 0;
            v[1] = INT_MAX;
            v[2] = INT_MIN;
            return v;
        }
        vector<int> lvec = solve(root->left);
        vector<int> rvec = solve(root->right);
        int val = root->data;
        if(val > lvec[2] and val < rvec[1]){
            lvec[0] = lvec[0] + rvec[0] + 1;
            lvec[1] = min(lvec[1],val);
            lvec[2] = max(rvec[2],val);
            return lvec;
        }
        else{
            lvec[0] = max(lvec[0], rvec[0]);
            lvec[1] = INT_MIN;
            lvec[2] = INT_MAX;
            return lvec;
        }
    }
    
    int largestBst(Node *root)
    {
    	vector<int> ans = solve(root);
    	return ans[0];
    }
