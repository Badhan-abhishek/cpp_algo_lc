// Really bad solution, but it works.
// Problem: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
#include <cmath>
#include <cstdlib>
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
    int listSize(ListNode* head) {
        int size = 0;
        while (head != nullptr) {
            head = head->next;
            size++;
        }
        return size;
    };

public:
    ListNode* deleteMiddle(ListNode* head) {
        //
        if (head->next == nullptr) {
            head = nullptr;
            return head;
        }
        int halfSize = std::round(listSize(head) / 2);
        ListNode* start = head;
        while (halfSize >= 0) {
            if (halfSize == 1) {
                if (head->next != nullptr && head->next->next != nullptr) {
                    head->next = head->next->next;
                } else {
                    head->next = nullptr;
                }
                break;
            }
            if (head->next != nullptr) {
                head = head->next;
            }
            halfSize--;
        }
        return start;
    }
};

