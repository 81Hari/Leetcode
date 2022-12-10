#include<iostream>
#include<math.h>
using namespace std;
//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long int a,b,c,i;
        a=b=i=0;
        ListNode *temp;
        temp=l1;

        while(temp != nullptr){
            a=a+(temp->val)*pow(10,i);
            i++;
            temp=temp->next;
        }
        temp=l2;
        i=0;
        while(temp != nullptr){
            b=b+(temp->val)*pow(10,i);
            i++;
            temp=temp->next;
        }
        c=a+b;



        ListNode* l3;
        ListNode* newnode;
        if(c==0){
            newnode=new struct ListNode;
            newnode->val=0;
            newnode->next=nullptr;
            l3=newnode;
            return l3;

        }

        while(c!=0){
            newnode=new struct ListNode;
            newnode->val=(int) c%10;
            newnode->next=nullptr;
            c=c/10;

            if(l3 == nullptr)
            {
                l3 = temp = newnode;
            }
            else{
                temp->next = newnode;
                temp = newnode;
            }
        }


return l3;


    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;
    ListNode *temp;
    ListNode *new_node;

    int i=1;
        while(true)
        {
            new_node = new ListNode;
            cout<<"\nEnter (Node "<<i<<") Data: ";
            cin>>new_node->val;
            new_node->next = nullptr;
            i++;
            if(l1 == nullptr)
            {
                l1 = temp = new_node;
            }
            else
            {
                temp->next = new_node;
                temp = new_node;
            }

            cout<<"\nTo add another node press 1:  ";
            int ch;
            cin>>ch;

            if(ch!=1)
            {
                break;
            }
        }



        i=1;
        while(true)
        {
            new_node = new ListNode;
            cout<<"\nEnter (Node "<<i<<") Data: ";
            cin>>new_node->val;
            new_node->next = nullptr;
            i++;
            if(l2 == nullptr)
            {
                l2 = temp = new_node;
            }
            else
            {
                temp->next = new_node;
                temp = new_node;
            }

            cout<<"\nTo add another node press 1:  ";
            int ch;
            cin>>ch;

            if(ch!=1)
            {
                break;
            }
        }


ListNode* l3 = sol.addTwoNumbers(l1,l2);
temp = l3;
while(temp != nullptr)
{
    cout<<temp->val;
    temp=temp->next;
}

    return 0;
}
