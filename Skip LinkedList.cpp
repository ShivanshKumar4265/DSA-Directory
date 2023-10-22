#include <iostream>
#include <vector>
#include <cstdlib>

const int MAX_LEVEL = 16;

struct Node {
    int value;
    std::vector<Node*> forward;
    Node(int level, int value) : value(value), forward(level, nullptr) {}
};

class SkipList {
public:
    SkipList() : level(1), head(new Node(MAX_LEVEL, 0)) {}

    bool search(int target) {
        Node* current = head;
        for (int i = level - 1; i >= 0; i--) {
            while (current->forward[i] && current->forward[i]->value < target) {
                current = current->forward[i];
            }
        }
        current = current->forward[0];
        return current && current->value == target;
    }

    void insert(int num) {
        int newLevel = randomLevel();
        Node* newNode = new Node(newLevel, num);

        Node* current = head;
        for (int i = level - 1; i >= 0; i--) {
            while (current->forward[i] && current->forward[i]->value < num) {
                current = current->forward[i];
            }
            if (i < newLevel) {
                newNode->forward[i] = current->forward[i];
                current->forward[i] = newNode;
            }
        }
        level = std::max(level, newLevel);
    }

    void erase(int num) {
        Node* current = head;
        std::vector<Node*> update(level, nullptr);

        for (int i = level - 1; i >= 0; i--) {
            while (current->forward[i] && current->forward[i]->value < num) {
                current = current->forward[i];
            }
            update[i] = current;
        }
        current = current->forward[0];

        if (current && current->value == num) {
            for (int i = 0; i < level; i++) {
                if (update[i]->forward[i] != current) {
                    break;
                }
                update[i]->forward[i] = current->forward[i];
            }
            delete current;
            while (level > 1 && !head->forward[level - 1]) {
                level--;
            }
        }
    }

    void display() {
        Node* current = head->forward[0];
        while (current) {
            std::cout << current->value << " -> ";
            current = current->forward[0];
        }
        std::cout << "nullptr" << std::endl;
    }

private:
    int randomLevel() {
        int level = 1;
        while (rand() % 2 == 0 && level < MAX_LEVEL) {
            level++;
        }
        return level;
    }

    int level;
    Node* head;
};

int main() {
    SkipList skipList;
    skipList.insert(1);
    skipList.insert(2);
    skipList.insert(3);
    skipList.display();

    if (skipList.search(2)) {
        std::cout << "Found 2" << std::endl;
    } else {
        std::cout << "2 not found" << std::endl;
    }

    skipList.erase(2);
    skipList.display();

    return 0;
}