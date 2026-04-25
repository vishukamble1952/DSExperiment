#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
Node* createTree(){
      int value;
      cout<<"Enter node value(-1 for no node):";
      cin>>value;
     
      if(value==-1){ return NULL;}
     
      Node* newNode=new Node(value);
     
      cout<<"Enter a left child of"<<value<<endl;
      newNode->left=createTree();

      cout<<"Enter right child of"<<value<<endl;
      newNode->right=createTree();

      return newNode;
}
void preorder(Node* root){
    if (root ==NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node* root){
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
   cout<<"Create Binary Tree\n";
   Node* root=createTree();
   
   int choice;
   
   do{
     cout<<"----Traversal Menu----"<<endl;
     cout<<"1.Preorder Traversal"<<endl;
     cout<<"2.Inorder Traversal"<<endl;
     cout<<"3.Postorder Traversal"<<endl;
     cout<<"4.exit"<<endl;
     cout<<"Enter your choice:";
     cin>>choice;
     
     switch(choice){
       case 1:
          cout<<"Preorder Traversal:";
          preorder(root);
          cout<<endl;
          break;
         
       case 2:
          cout<<"INorder Traversal:";
          inorder(root);
          cout<<endl;
          break;
         
       case 3:
          cout<<"Postorder Traversal:";
          postorder(root);
          cout<<endl;
          break;
         
       case 4:
          cout<<"Exit the program"<<endl;
          break;
               
       default:
          cout<<"Invalid choice!! Try again."<<endl;
     }
   }while(choice!=4);
   
   return 0;
   }
