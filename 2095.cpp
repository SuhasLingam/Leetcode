class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL) {
            return NULL;
        }
        ListNode* temp = head;
        vector<ListNode*> values;
        // To Find the Mid Value
        while(temp != NULL) {
            values.push_back(temp);
            temp = temp -> next;
        }
        int mid = values.size() / 2;


        //Delete the 2nd element if only 2 elements
        if(values.size() == 2) {;
            head -> next = NULL;
            delete values[1];
            return head;
        }

        ListNode* curr = values[mid];
        ListNode* prev = values[mid - 1];
        prev -> next = curr -> next;
        delete curr;
        return head;
    }
};
