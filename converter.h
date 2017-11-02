float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float mi_to_m(void)
{
    //GRACE STINEMATES
    float mi_to_m = get_float("Number of Miles: ");
    float m = mi / 1909.34;
    printf("\nThe number of meters is%2f\n", m);
    return m;
}
