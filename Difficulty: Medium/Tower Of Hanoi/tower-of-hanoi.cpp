class Solution {
public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // Base case: If there are no disks, 0 moves are needed.
        if (n == 0) {
            return 0;
        }
        
        int moves = 0;
        
        // 1. Move n-1 disks from 'from' rod to 'aux' rod using 'to' rod as auxiliary
        moves += towerOfHanoi(n - 1, from, aux, to);
        
        // 2. Move the nth disk from 'from' rod to 'to' rod
        moves += 1;
        
        // 3. Move the n-1 disks from 'aux' rod to 'to' rod using 'from' rod as auxiliary
        moves += towerOfHanoi(n - 1, aux, to, from);
        
        return moves;
    }
};