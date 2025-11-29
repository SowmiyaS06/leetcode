/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * newHead = NULL, *newTail = NULL;
        Node * curr = head;
        map<Node*, Node*> mp;

        while(curr){
            Node * newNode = new Node(curr->val);
            if(newHead == NULL){ 
                newHead = newNode;
                newTail = newNode;
            }
            else newTail = newTail->next = newNode;

            mp[curr] = newNode;   // FIXED
            curr = curr->next;
        }

        curr = head;
        Node * curr2 = newHead;

        while(curr){
            if(curr->random)
                curr2->random = mp[curr->random];   // FIXED
            curr = curr->next;
            curr2 = curr2->next;
        }

        return newHead;
    }
};
