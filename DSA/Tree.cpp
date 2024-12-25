#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *left, *right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

// =====================================   ===============================================
// New node creation
struct node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;
    return (node);
}



// ======================================   ===============================================


//======================== TRANSVERSAL ====================================

//preorder
void preorder(Node* root){
    if(root == NULL) return;

    cout<<(root->data);
    preorder(root->left);
    preorder(root->right);
}

//postorder
void postorder(Node* root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<(root->data);
}

//inorder
void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<(root->data);
    inorder(root->right);

}

//============================================ TRANSVERSAL END ============================================

//===========================

bool isFullBinaryTree(struct Node *root) {
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    if ((root->left) && (root->right))
        return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

    return false;
}

// ============================

nt main() {
  struct Node* root = new Node(1);
  root->left = new Node(12);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);

  cout << "Inorder traversal ";
  inorderTraversal(root);

  cout << "\nPreorder traversal ";
  preorderTraversal(root);

  cout << "\nPostorder traversal ";
  postorderTraversal(root);
  return 0;  
}  