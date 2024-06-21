/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>values;
       
       while(list1 != NULL) {
            values.push_back(list1 -> val);
            list1 = list1 -> next;
       }

       while(list2 != NULL) {
            values.push_back(list2 -> val);
            list2 = list2 -> next;
       }

    sort(values.begin() , values.end());

    ListNode dummy;
    ListNode* newNode = &dummy;
    for (int val : values) {
        newNode->next = new ListNode(val);
        newNode = newNode->next;
    }
    return dummy.next;
    }
};
