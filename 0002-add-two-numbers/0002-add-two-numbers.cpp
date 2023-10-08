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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int count1 = 0, count2 = 0, temp = 0;
        ListNode* node1 = l1;
        ListNode* node2 = l2;
        ListNode* li = new ListNode();

        vector<int> v;
        while (node1) {
            v.push_back(0);
            v[count1] += node1->val;
            node1 = node1->next;
            count1++;
        }
        
        while(node2) {
            if(count2 < count1) {
                v[count2] += node2->val + temp;
                temp = 0;
                if (v[count2] >= 10) {
                    v[count2] -= 10;
                    temp = 1;
                    }
            }
            else {
                v.push_back(0);
                v[count2] += node2->val + temp;
                temp = 0;
                if (v[count2] >= 10) {
                    v[count2] -= 10;
                    temp = 1;
                    }
            }
            node2 = node2->next;
            count2++;
        }

        if (temp) {
            for (int i = count2; i < count1; i++) {
                v[i] += temp;
                temp = 0;
                if (v[i] >= 10) {
                    v[i] -= 10;
                    temp = 1;
                    }
            }
        }
        if (temp) v.push_back(1);
        
        node1 = li;
        li->val = v[0];
        for (int i = 1; i < v.size(); i++) {
            node1 -> next = new ListNode();
            node1 = node1->next;
            node1->val = v[i];
        }

        return li;
    }
};