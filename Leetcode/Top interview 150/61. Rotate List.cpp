class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k)
    {
        if (!head || k == 0)
         {
            return head;
         }

        ListNode* current = head;
        int length = 1; 

        while (current->next) 
        {
            current = current->next;
            length++;
        }

        current->next = head;
        k = k % length; 

        if (k == 0) 
        {
            current->next = nullptr; 
            return head;
        }
        
        int steps = length - k;
        ListNode* tail = head;

        for (int i = 1; i < steps; ++i) 
        {
            tail = tail->next;
        }

        ListNode* res = tail->next;
        tail->next = nullptr; 

        return res;
    }
};
