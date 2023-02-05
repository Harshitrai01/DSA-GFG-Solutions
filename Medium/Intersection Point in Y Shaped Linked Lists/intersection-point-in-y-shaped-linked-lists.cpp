//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        int h1=0;
        int h2=0;
        Node *curr1=head1;
        while(curr1!=NULL){
            h1++;
            curr1=curr1->next;
        }
        Node *curr2=head2;
        while(curr2!=NULL){
            h2++;
            curr2=curr2->next;
        }
        
        int diff=0;
        if(h1>h2){
            diff=h1-h2;
            while(diff--){
                head1=head1->next;
            }
        }
        
        if(h2>h1){
            diff=h2-h1;
            while(diff--){
                head2=head2->next;
            }
        }
        

        while(head1!=NULL){
            if(head1==head2)
                return head1->data;
            else{
                head1=head1->next;
                head2=head2->next;
            }
        }
        
        return -1;
    }
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends