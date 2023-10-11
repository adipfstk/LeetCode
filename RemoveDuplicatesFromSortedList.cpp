

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *prez = head;
        while (prez != nullptr)
        {
            while (prez->next != nullptr && prez->next->val == prez->val)
            {
                ListNode *nnext = prez->next->next;
                delete prez->next;
                prez->next = nnext;
            }
            prez = prez->next;
        }
        return head;
    }
};