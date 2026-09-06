class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // Calculate the discriminant
        double D = (b * b) - (4.0 * a * c);

        // If discriminant is negative, roots are imaginary
        if (D < 0) {
            return {-1};
        }

        // Calculate both roots and floor them
        int root1 = floor((-b + sqrt(D)) / (2.0 * a));
        int root2 = floor((-b - sqrt(D)) / (2.0 * a));

        // Return roots in decreasing order
        return {max(root1, root2), min(root1, root2)};
    }
};