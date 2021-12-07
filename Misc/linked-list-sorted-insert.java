/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    class Node{
        int data;
        Node next;
        Node(int n){
            data = n;
            next = null;
        }
    }
    Node head;
    Node newNode(int n){
        Node ne = new Node(n);
        return ne;
    }
    void sortedInsert(Node n){
        Node current;
        if(head == null || head.data>=n.data){
            n.next = head;
            head = n;
        }
        else{
            current = head;
            while(current.next != null && current.next.data < n.data)
                current = current.next;
            n.next = current.next;
            current.next = n;
        }
    }
    
    void printList(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data+"->");
            temp = temp.next;
        }
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		 Codechef llist = new Codechef();
         Node new_node;
         new_node = llist.newNode(5);
         llist.sortedInsert(new_node);
         new_node = llist.newNode(10);
         llist.sortedInsert(new_node);
         new_node = llist.newNode(7);
         llist.sortedInsert(new_node);
         new_node = llist.newNode(3);
         llist.sortedInsert(new_node);
         new_node = llist.newNode(1);
         llist.sortedInsert(new_node);
         new_node = llist.newNode(9);
         llist.sortedInsert(new_node);
         System.out.println("Created Linked List");
         llist.printList();
	}
}
