# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sumNumbers(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """

        sumList = [0]

        def dfs(root, currentValue):

            if root is None:
                return

            if root.left is None and root.right is None:
                sumList.append(10*currentValue + root.val)
            
            dfs(root.left, 10*currentValue + root.val)
            dfs(root.right, 10*currentValue + root.val)

        dfs(root, 0)
        return sum(sumList)
        