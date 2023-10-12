struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        int count = 0;
        ListNode *slow = nullptr, *fast = nullptr;
        slow = fast = head;
        while (fast != nullptr)
        {
            if (count % 2 == 0 && count != 0)
            {
                slow = slow->next;
            }

            count++;
            fast = fast->next;
        }

        return count % 2 == 0 ? slow->next : slow;
    }
};