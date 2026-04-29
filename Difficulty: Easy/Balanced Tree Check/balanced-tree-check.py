class Solution:
    def isBalanced(self, root):
        def check(node):
            if not node:
                return 0  # height of empty tree
            
            left = check(node.left)
            if left == -1:
                return -1
            
            right = check(node.right)
            if right == -1:
                return -1
            
            if abs(left - right) > 1:
                return -1  # unbalanced
            
            return max(left, right) + 1  # height of current node
        
        return check(root) != -1