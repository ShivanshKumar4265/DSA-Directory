#include <iostream>
#include <string>

struct Node {
    char data;
    Node* next;
};

std::string reverseStringWithLinkedList(const std::string& inputString) {
    Node* head = nullptr;
    Node* current = nullptr;

    for (char ch : inputString) {
        current = new Node{ch, nullptr};
        current->next = head;
        head = current;
    }

    std::string reversedString = "";

    while (current != nullptr) {
        reversedString += current->data;
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return reversedString;
}

int main() {
    std::string originalString = "Hello, Shivansh Sir";
    std::string reversed = reverseStringWithLinkedList(originalString);
    std::cout << reversed << std::endl;

    return 0;
}