// Binary Search Tree
/*
    A binary Seach tree is a speacial tree where 
    # Every node has at most 2 children
    # For Every Node -
        # All the nodes in the left subtree are smaller than the node
        # All the nodes in the right subtree are greater than the node
    # Both the left and right subtrees are also binary search trees
    # The Inorder traversal of a binary search tree is always sorted in increasing order

    # If there is a question to check this tree is sorted or not
       -> Just traverse the tree in Inorder and check the values are in increasing order or not
       -> If sorted then it is a binary search tree otherwise not
*/

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

Node* Insert(Node* root, int val){
    if(root == NULL) return new Node(val);

    // agar value less h root se toh left me insert karna hai otherwise right me
    if(val < root->data){
        root->left = Insert(root->left, val);
    }
    else{
        root->right = Insert(root->right, val);
    }

    return root;
}

void Inorder(Node* root){
    if(root == NULL) return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);

    Inorder(root); // 3 5 7 10 15 18

    return 0;
}

