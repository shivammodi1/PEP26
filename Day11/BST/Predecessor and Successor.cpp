// Predecessor and Successor
// Predecessor-> The largest value in the left subtree of the node < key.
// Successor-> The smallest value in the right subtree of the node > key.

// Approach:
// Toh hame key se just chhota element and key se just bada element find krna hain.
// So iske like ans vector bana lenege jo ki node ko store karega , Inorder traversal se sorted form me hoga ans vector.
// abb 1 mini and maxi variable bana lenege , mini me key se just chhota element store karenge and maxi me key se just bada element store karenge.
// Time complexity: O(n) where n is the number of nodes in the tree

void InOrder(Node* root,vector<Node*> &ans){
     if(root == NULL){
        return;
    }
    InOrder(root->left, ans);
    ans.push_back(root);
    InOrder(root->right, ans);
}

vector<Node *> findPreSuc(Node *root, int key)
{
    vector<Node*> ans;
    vector<Node*> res;

    if(!root){
        return {NULL, NULL};
    }

    if(root == NULL){
        res.push_back(NULL);
        res.push_back(NULL);
        return res;
    }

    InOrder(root, ans);

    Node* mini=NULL;
    Node* maxi=NULL;
    for(int i=0;i<ans.size();i++){
        if(ans[i]->data < key){
            mini = ans[i];
        }
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]->data > key){
            maxi = ans[i];
            break;
        }
    }

    res.push_back(mini);
    res.push_back(maxi);
    return res;
}
