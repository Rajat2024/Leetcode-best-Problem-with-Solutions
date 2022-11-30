//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    void reorderList(Node* head) {
        
        
        // 1. First divide the list in two equal part .
        // 2. Then sort the second list .
        // 3. Then Take the first element from first and first element from second array.
        // 4. repeat the 3rd step unless list point to NULL.
        
          if( head->next == NULL ) return ; 
        
        int n = 0 ;
        
        Node* temp = head ;
        
        while( temp != NULL )
        {
            n++ ;
            temp = temp->next ;
        }
        
         n /= 2 ;
        
        temp = head ;
        Node* prev = NULL ;
        
        while( n-- )
        {
            prev = temp ;
            temp = temp->next ;
            
        }
        
        prev->next = NULL ;
        
        prev = NULL ;
        Node * nex = NULL ;
        while( temp != NULL )
        {
            nex = temp->next ;
            temp->next = prev ;
            prev = temp ;
            temp = nex ;
        }
        
        Node* head2 = prev ;
        
        
        Node* temp1 = NULL, *temp2 = NULL ;
        while( head != head2 )
        {
            temp1 = head->next ;
            head->next = head2 ;
            head = temp1 ;
            
            
            if( head == NULL) break ;
            
            temp2 = head2->next ;
            
            
            head2->next = temp1 ;
            head2 = temp2 ;
        }
        
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends