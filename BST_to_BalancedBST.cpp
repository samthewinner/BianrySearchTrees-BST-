Node* makeTree(vector<int> a,int l,int r){
    if(l>r) return NULL;
    int mid = l + (r-l) / 2;
    // if(mid == l);
    Node* node = new Node(a[mid]);
    // if(mid == l)
    
    if(mid != l)    node->left = makeTree(a,l,mid-1);
    else node->left = NULL;
    
    if(mid != r)node->right = makeTree(a,mid+1,r);
    else node->right = NULL;
    return node;
}

void inorder(Node* root,vector<int>&a){
    if(!root) return;
    inorder(root->left,a);
    a.push_back(root->data);
    inorder(root->right,a);
}

Node* buildBalancedTree(Node* root)
{
	vector<int> a;
	inorder(root,a);
	
	return makeTree(a,0,a.size()-1);
}
