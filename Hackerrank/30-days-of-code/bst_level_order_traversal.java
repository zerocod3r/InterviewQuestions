import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class Solution{

	static void levelOrder(Node root){
      if(root == null) System.out.println();
      else{
          Queue<Node> q = new LinkedList<Node>();
          q.add(root);
          while(q.size() != 0){
              Node temp = q.peek();
              System.out.print(temp.data + " ");
              q.remove();
              if(temp.left != null) q.add(temp.left);
              if(temp.right != null) q.add(temp.right);
          }

      }
      
    }

	public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}