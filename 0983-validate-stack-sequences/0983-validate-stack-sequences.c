

bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize){
    int countPush = 0, countPop = 0, top = -1;
    int* stack = (int*)malloc(sizeof(int) * pushedSize);

    for (int i = 0; i < pushedSize; i++) stack[i] = -1;
    while (1) {
        if (top > -1 && stack[top] == popped[countPop]) {
            stack[top--] = -1;
            countPop++;
            if (countPop >= poppedSize) return true;
        }
        else {
            if (countPush >= pushedSize) return false;
            stack[++top] = pushed[countPush++];
        }
    }
}