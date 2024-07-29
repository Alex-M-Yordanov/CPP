class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(!list1)
        {
            return list2;
        }
        if(!list2)
        {
            return list1;
        }
        ListNode* it1=list1;
        ListNode* it2=list2;
        ListNode* begin;
        if(list1->val > list2->val) 
        {
            begin=list2;
            it2=it2->next;
        } 
        else
        {
            begin=list1;
            it1=it1->next;
        } 
        ListNode* it=begin;
        

        while(it1 && it2)
        {
           if(it1->val < it2->val)
           {
            it->next=it1;
            it1=it1->next;
           }
           else
           {
            it->next=it2;
            it2=it2->next;
           }
           it=it->next;
        }

        if(!it2)
        {
            it->next = it1;
        }
        else if(!it1)
        {
            it->next = it2;
        }
        return begin;
       }
};
