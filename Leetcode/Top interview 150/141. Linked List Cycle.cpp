class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        
      ListNode* it_fast=head;
      ListNode* it_slow=head;
      while(it_fast && it_fast->next)
        {
          it_fast = it_fast->next->next;
          it_slow = it_slow->next;

          if(it_fast == it_slow)
          {
            return true;
          }
        }
        return false;
    }
};
