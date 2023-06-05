class Solution {
    public boolean checkStraightLine(int[][] coordinates) {

        int xSlope = coordinates[1][0] - coordinates[0][0]; // gets general slope (k)
        int ySlope = coordinates[1][1] - coordinates[0][1];

        for(int i = 1; i < coordinates.length; ++i) {

            // y = k * x + b (we only look at y = k * x)
            // k = ySlope / xSlope
            // y * xSlope = x * ySlope

            int x = coordinates[i][0] - coordinates[i-1][0];
            int y = coordinates[i][1] - coordinates[i-1][1];


            if(xSlope * y != ySlope * x) return false;

        }

        return true;
    }
}