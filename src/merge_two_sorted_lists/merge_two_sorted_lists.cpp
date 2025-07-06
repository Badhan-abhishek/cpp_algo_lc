// Bad solution

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
  ListNode *walk(ListNode *list1, ListNode *list2, ListNode *result) {
    //

    if (list1 == nullptr && list2 == nullptr) {
      return result;
    }

    if (list1 != nullptr && list2 != nullptr) {
      if (list1->val >= list2->val) {
        if (result->val <= list2->val) {
          result->next = new ListNode(list2->val);
          result = result->next;
          list2 = list2->next;
        }
      } else {
        if (result->val <= list1->val) {
          result->next = new ListNode(list1->val);
          result = result->next;
          list1 = list1->next;
        }
      }
    } else {
      if (list2 != nullptr) {
        result->next = new ListNode(list2->val);
        result = result->next;
        list2 = list2->next;
      } else if (list1 != nullptr) {
        result->next = new ListNode(list1->val);
        result = result->next;
        list1 = list1->next;
      }
    }

    return walk(list1, list2, result);
  };

public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    //

    ListNode *resultNode = new ListNode(-110);

    walk(list1, list2, resultNode);

    return resultNode->next;
  }
};
