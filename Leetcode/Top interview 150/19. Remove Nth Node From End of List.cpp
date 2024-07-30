class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int cnt=0;
        ListNode* it = head;
        while(it)
        {
            ++cnt;
            it=it->next;
        }
        int pos = cnt - n +1;
        if(cnt==1 && pos==1)
        {
            return nullptr;
        }
        else if(cnt==1 && pos!=1)
        {
            return head;
        }

        if(cnt>1 && pos ==1)
        {
            return head->next;
        }

        it=head;
        cnt=1;
        
        while(it && it->next)
        {
           if(cnt==pos-1)
           {
              if(it->next->next)
              {
                it->next=it->next->next;
                break;
              }
              else
              {
                it->next = nullptr;
              }
           }
            ++cnt;
           it=it->next;
        }
        return head;
    }
};
