class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        slopes = []

        for i in range(1, len(prices)):
            slopes.append(prices[i] - prices[i-1])

        prevBuyIndex = 0
        totalProfit = 0

        for i in range(1, len(slopes)):
            if slopes[i] > 0 and slopes[i-1] <= 0:
                prevBuyIndex = i 
        
            if slopes[i] <= 0 and slopes[i-1] > 0:
                totalProfit += prices[i] - prices[prevBuyIndex]
                prevBuyIndex = i

        if prices[len(prices) - 1] - prices[prevBuyIndex] > 0:
            totalProfit += prices[len(prices) - 1] - prices[prevBuyIndex]
        
        return totalProfit if totalProfit > 0 else 0