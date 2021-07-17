/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        int x=0,y=0;
        while(temp1!=NULL){
            x++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            y++;
            temp2=temp2->next;
        }int diff;
        ListNode* res=NULL;
        if(x-y==0){
            temp1=head1;
            temp2=head2;
            while(temp1!=NULL){
                if(temp1==temp2){
                    return temp1;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return NULL;
        }
        else{
            if(x>y){
                 temp1=head1;
                temp2=head2;
                diff=x-y;
            }
            else{
                temp1=head2;
                temp2=head1;
                diff=y-x;
            }
            while(diff){
                temp1=temp1->next;
                diff--;
            }
            while(temp1!=NULL){
                if(temp1==temp2){
                    return temp1;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return NULL;
    }
};