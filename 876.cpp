class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        vector<ListNode*> values;
        while(temp != NULL) {
            values.push_back(temp);
            temp = temp -> next;
        }

        int mid = values.size() / 2;
        return values[mid];
    }
};
