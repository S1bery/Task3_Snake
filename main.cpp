#include <iostream>

int main() {
    int nums[5][5];

    int sequence = 0;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 5; j++) {
                nums[i][j] = sequence;
                sequence += 1;
            }
        } else {
            sequence += 4;
                for (int j = 0; j < 5; j++) {
                    nums[i][j] = sequence;
                    sequence -= 1;
            }
            sequence += 6;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << nums[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
