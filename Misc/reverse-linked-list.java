/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }
    
    Node reverseList(Node curr, Node prev){
        if(curr.next == null){
            head = curr;
            curr.next = prev;
            return null;
        }
        Node nextnode = curr.next;
        curr.next = prev;
        reverseList(nextnode,curr);
        return head;
    }
    
    void printList(Node node){
        while (node != null) {
            System.out.print(node.data + "->");
            node = node.next;
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		Codechef list = new Codechef();
        list.head = new Node(85);
        list.head.next = new Node(15);
        list.head.next.next = new Node(4);
        list.head.next.next.next = new Node(20);
         
        System.out.println("Given Linked list");
        list.printList(head);
        head = list.reverseList(head,null);
        System.out.println("");
        System.out.println("Reversed linked list ");
        list.printList(head);
	}
}
