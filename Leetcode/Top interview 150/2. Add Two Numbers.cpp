class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int move = 0;

        ListNode* it1=l1;
        ListNode* it2=l2;

        while(it1 && it2)
        {
            it1->val = it1->val + it2->val + move;
            move = it1->val / 10;
            it1->val = it1->val % 10;
           
           it1=it1->next;
           it2=it2->next;
        }
    
        if(!it1 && it2)
        {
         it1=l1;
         while(it1->next)
         {
             it1=it1->next;
         }
          it1->next = it2;
          it1=it1->next;
          while(it2)
          {
            
            it1->val = it2->val + move;
            move = it1->val / 10;
            it1->val = it1->val % 10;
            it2=it2->next;
            it1=it1->next;
          }
        }

        if(it1 && !it2)
        {
          while(it1)
          {
            it1->val = it1->val + move;
            move = it1->val / 10;
            it1->val = it1->val % 10;
            it1=it1->next;
          }
        }

        if(move!=0)
        {
            it1=l1;
            while(it1->next)
            {
                it1=it1->next;
            }
            ListNode* end = new ListNode(move);
            it1->next= end;
        }

        return l1;
    }
};
