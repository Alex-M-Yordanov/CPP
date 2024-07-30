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


//More elegant solution

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        int total = 0, carry = 0;

        while (l1 || l2 || carry) {
            total = carry;

            if (l1) {
                total += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                total += l2->val;
                l2 = l2->next;
            }

            int num = total % 10;
            carry = total / 10;
            dummy->next = new ListNode(num);
            dummy = dummy->next;
        }

        return res->next;        
    }
