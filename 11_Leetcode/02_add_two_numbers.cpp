#include <iostream>

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to add two numbers represented as linked lists
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* curr = dummyHead;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry;

        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }

    ListNode* result = dummyHead->next;
    delete dummyHead; // Clean up memory
    return result;
}

// Helper function to create a linked list from user input
ListNode* createList(int count) {
    if (count <= 0) return nullptr;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < count; ++i) {
        int digit;
        std::cin >> digit;

        ListNode* newNode = new ListNode(digit);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val;
        if (head->next != nullptr) {
            std::cout << " -> ";
        }
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    int n1, n2;

    std::cout << "Enter number of digits for First List: ";
    std::cin >> n1;
    std::cout << "Enter " << n1 << " digits (in reverse order, separated by space): ";
    ListNode* l1 = createList(n1);

    std::cout << "Enter number of digits for Second List: ";
    std::cin >> n2;
    std::cout << "Enter " << n2 << " digits (in reverse order, separated by space): ";
    ListNode* l2 = createList(n2);

    // Calculate sum
    ListNode* result = addTwoNumbers(l1, l2);

    // Display result
    std::cout << "Result List: ";
    printList(result);

    return 0;
}