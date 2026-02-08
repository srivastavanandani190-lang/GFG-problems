void precise(float a, float b) {
    // perform a/b
    float res=a/b;
    
 

    // without fixed (default precision)
    cout << res << " ";

    // with fixed and precision up to 3 decimal places
    cout << fixed << setprecision(3) << res << endl;
}