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
        
        ListNode* begin;
        if(list1->val > list2->val) 
        {
            begin=list2;
            list2=list2->next;
        } 
        else
        {
            begin=list1;
            list1=list1->next;
        } 
        
        ListNode* it=begin;
    
        while(list1 && list2)
        {
           if(list1->val < list2->val)
           {
            it->next=list1;
            list1=list1->next;
           }
           else
           {
            it->next=list2;
            list2=list2->next;
           }
           it=it->next;
        }

        if(!list2)
        {
            it->next = list1;
        }
        else if(!list1)
        {
            it->next = list2;
        }
        return begin;
       }
};
